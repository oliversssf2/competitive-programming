#include<bits/stdc++.h>
using namespace std;

void func(int** map,int xu,int xl,int yu,int yl){
    if(xu==xl && yu==yl){
        map[xu][yu] = 1;
    }
    else {
        for(int i = xl; i<(xl+xu+1)/2; i++){
            for(int j = yl; j<(yl+yu+1)/2; j++){
                map[i][j]=0;
            }
        }
        func(map, xu, (xu+xl+1)/2, (yl+yu-1)/2, yl); //right upper
        func(map, (xu+xl-1)/2, xl, yu, (yl+yu+1)/2); //left lower
        func(map, xu, (xu+xl+1)/2, yu, (yu+yl+1)/2); // right lower
    }

}

int main(){
    int a;
    cin >>a;
    int k = pow(2,a);

    int *map[k];
    for(int i=0; i<k;i++){
        map[i] = new int[k];
        for(int j=0; j<k;j++){
            map[i][j]=0;
        }
    }

    func(map, k-1, 0, k-1, 0);

    for(int i = 0; i<k; i++){
        for(int j = 0; j<k; j++){
            cout<<map[i][j]<<' ';
        }
        cout<<'\n';
    }

    return 0;
}