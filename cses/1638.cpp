#include<iostream>
#include<cstring>
#include<cstdio>

typedef long long ll;

using namespace std;

int k=1000000007;

int main(){
    int a;
    cin>>a;
    ll map[a+2][a+2];
    memset(map, -1, sizeof(map));

    char tmp;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            cin>>tmp;
            if(tmp=='.'){
                map[i][j]=0;
            }
        }
    }

    if(map[1][1]!=-1)map[1][1]=1;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            if(map[i][j]==-1)continue;
            if(map[i-1][j]!=-1)
                map[i][j]=((map[i][j])%(k)+map[i-1][j]%k)%k;
            if(map[i][j-1]!=-1)
                map[i][j] =(map[i][j]%k+map[i][j-1]%k)%k;
        }
    }


    // for(int i=1; i<=a; i++){
    //     for(int j=1; j<=a; j++){
    //         printf("% 3d", map[i][j]);
    //     }
    //     cout<<'\n';
    // }

    if(map[a][a]!=-1)
        cout<<map[a][a];
    else cout<<0;


    
    return 0;
}