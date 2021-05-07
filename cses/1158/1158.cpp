#include<iostream>
#include<vector>
#include<utility>

typedef long long ll;

using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    vector<int> prices(n, 0);
    vector<int> pages(n, 0);

    for(auto& c:prices) cin>>c;
    for(auto& c:pages) cin>>c;

    vector<vector<int>> dp(n+1, vector<int>(x+1,0));

    for(int i=1; i<=n; i++){
        for(int j=0; j<=x; j++){
            dp[i][j] = dp[i-1][j];
            if(j>=prices[i-1]) dp[i][j] = max(dp[i][j], dp[i-1][j-prices[i-1]]+pages[i-1]);
        }
    }
    cout<<dp[n][x];

    return 0;
}