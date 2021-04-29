#include<bits/stdc++.h>
using namespace std;

int main(){
    int sq[12][12] = {};
    int a;
    cin>>a;
    int b = 2;
    int c{0};
    int r{0};
    sq[0][0]=1;
    while(b<=pow(a,2)){
        while(c<(a-1)&&!sq[r][c+1])sq[r][++c]=b++;
        while(r<(a-1)&&!sq[r+1][c])sq[++r][c]=b++;
        while(c>0&&!sq[r][c-1])sq[r][--c]=b++;
        while(r>0&&!sq[r-1][c])sq[--r][c]=b++;
    }

    for(int i=0;i<a;i++){
        for(int j=0; j<a; j++){
            printf("% 3d", sq[i][j]);
        }
        cout<<'\n';
    }
    return 0;
}