#include<bits/stdc++.h>
using namespace std;


int k = 5;

int main(){
//    freopen("input","r",stdin);
//    freopen("output","w+",stdout);

    // int size;
    // while(cin>>size){
        int size;
        cin>>size;

        int sq[size][size] = {};
        sq[0][int((size-1)/2)]=1;

        int lc=int((size-1)/2);
        int lr=0;

        for(int i = 2; i<=pow(size,2);i++)
        {
            if(lr==0&&lc!=(size-1)){
                lr=size-1;
                lc+=1;
            }
            else if(lc==(size-1)&&lr!=0){
                lc=0;
                lr-=1;
            }
            else if(lr==0&&lc==(size-1)){
                lr+=1;
            }
            else if(lr!=0&&lc!=(size-1)){
                if(sq[lr-1][lc+1]==0)
                {
                    lr-=1;
                    lc+=1;
                }
                else lr+=1;
            }
            sq[lr][lc]=i;
        }


        for(int i = 0; i<size;i++){
            for(int j=0; j<size;j++){
                cout<<sq[i][j]<<' ';
            }
            cout<<'\n';
        }

    // }
}