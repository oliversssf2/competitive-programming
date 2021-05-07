#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;



int dp_2d_map_2_dirs(){
    int size;
    cin>>size;
    int map[size][size]; 
    int value[size][size];
    int last_step[size][size][2];
    int dir[][2] = {{-1,0}, {0,-1}};
    cout << dir[0][0]<<dir[0][1]<<dir[1][0]<<dir[1][1];
    memset(map, 0, sizeof(map));
    memset(value, 0, sizeof(value));
    memset(last_step, 0, sizeof(last_step));

    for(int i=0; i<size;i++){
        for(int j =0; j<size;j++){
            cin>>map[i][j];
        }
    }
    value[0][0] = map[0][0];
    for(int i=0; i<size;i++){
        for(int j=0; j<size; j++){
            if(i<size-1&&value[i+1][j]<(value[i][j]+map[i+1][j])){
                value[i+1][j]=value[i][j]+map[i+1][j];
                last_step[i+1][j][0] = dir[0][0];
                last_step[i+1][j][1] = dir[0][1];

            }
            if(j<size-1 && value[i][j+1]<value[i][j]+map[i][j+1]){
                value[i][j+1] = value[i][j]+map[i][j+1];
                last_step[i][j+1][0] = dir[1][0];
                last_step[i][j+1][1] = dir[1][1];
            }

            // if(i<size-1) value[i+1][j] = 
            //     value[i+1][j]<(value[i][j]+map[i+1][j])? value[i][j]+map[i+1][j]:value[i+1][j];
            // if(j<size-1) value[i][j+1] = 
            //     value[i][j+1]<(value[i][j]+map[i][j+1])? value[i][j]+map[i][j+1]:value[i][j+1];
        }

    }

    

    for(int i=0; i<size;i++){
        for(int j =0; j<size;j++){
            cout<<map[i][j]<<' ';
        }
        cout<<'\n';
    }

    for(int i=0; i<size;i++){
        for(int j =0; j<size;j++){
            cout<<value[i][j]<<' ';
        }
        cout<<'\n';
    }
    for(int i=0; i<size;i++){
        for(int j =0; j<size;j++){
            printf("% 3d %3d    ", last_step[i][j][0], last_step[i][j][1]);
            // cout<<last_step[i][j][0]<<' '<<last_step[i][j][1]<<'\t';
        }
        cout<<'\n';
    }


    int i = size-1; 
    int j = size-1;
    while(i||j){
        cout<< i <<' '<<j <<'\n';
        int ti = i;
        int tj = j;
        i+=last_step[ti][tj][0];
        j+=last_step[ti][tj][1];
    }
    printf("0 0");
   

    return 0;
}

int main(){

    int max = dp_2d_map_2_dirs();
    return 0;
}

