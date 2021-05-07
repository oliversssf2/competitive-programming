#include<iostream>
#include<cstring>

using namespace std;


/*
The recursion behing this problem:

cut(x,y) = min(cut(1~n, 1~m))
*/

int main(){
    int a,b;
    cin>>a>>b;

//    if(a>b) swap(a,b);

    int dp[a+1][b+1];
    memset(dp , 63, sizeof(dp));


    for(int i = 0; i<=min(a,b); i++){
        dp[i][i] = 0;
        dp[i][0] = 0;
        dp[0][i] = 0;
    }

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k = 1; k<i; k++){
                dp[i][j] = min(dp[i][j], dp[k][j]+dp[i-k][j]+1);
            }
            for(int l = 1; l<j; l++){
                dp[i][j] = min(dp[i][j], dp[i][l]+dp[i][j-l]+1);
            }
        }
    }
    cout<<dp[a][b];
    return 0;
}