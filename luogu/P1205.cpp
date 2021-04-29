#include<bits/stdc++.h>
using namespace std;

/*  1  2  3  4
    5  6  7  8
    9  10 11 12
    13 14 15 16
    to
    */

// char** t90(char **sq){
//     int l = sizeof(sq)/sizeof(sq[0][0]);
//     cout<<sizeof(sq)<<'\n';
//     cout<<sizeof(sq[0][0])<<'\n';
//     cout<<sq[0]<<'\n';
//     cout<<sizeof(sq)/sizeof(sq[0]);
//     cout<<sizeof(sq[0])/sizeof(char);
//     return sq;
    
// }
int main(){
    int a;
    cin>>a;
    // char sq[a][a] = {};
    char **sq;
    sq = new char *[a];
    for(int i = 0;i<a;i++){
        sq[i] = new char[a];
    }
    for(int i = 0; i<a;i++)
    {
        for(int j=0; j<a;j++){
            char t;
            cin>>t;
            sq[i][j]=t;
        }
    }
    
    // char **k = t90(sq);
    char t90[a][a] = {};
    for(int i = 0;i<a;i++){
        for(int j=0; j<a; j++){
            t90[j][a-i-1]=sq[i][j];
        }
    }
    cout<<'\n';

    char t180[a][a] = {};
    for(int i = 0;i<a;i++){
        for(int j=0; j<a; j++){
            t180[a-i-1][a-j-1]=sq[i][j];
        }
    }

    char t270[a][a] = {};
    for(int i = 0;i<a;i++){
        for(int j=0; j<a; j++){
            t270[a-1-j][i]=sq[i][j];
        }
    }
    cout<<'\n';





    for(int i = 0; i<a;i++)
    {
        for(int j=0; j<a;j++){
            cout<<t90[i][j];
        }
        cout<<'\n';
    }
    cout << '\n';

    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<t180[i][j];
        }
        cout<<'\n';
    }
    cout<<'\n';

    for(int i = 0; i<a;i++)
    {
        for(int j=0; j<a;j++){
            cout<<t270[i][j];
        }
        cout<<'\n';
    }
    cout << '\n';
    return 0;
}