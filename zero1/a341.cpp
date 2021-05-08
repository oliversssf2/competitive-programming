#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;

    vector<long long> forest(a, 0);
    for(long long& k:forest) cin>>k;

    int mx=0;
    for(int i=0; i<b; i++){
        if(forest[mx]+forest[mx+1]<forest[i]+forest[i+1]) mx=i;
    }

    long long t = 0;
    for(int i =0;i<=mx+1;i++)
        t+=forest[i];

    b-=(mx+1);
    
    if(b%2==0)
        t+=(forest[mx]+forest[mx+1])*(long long)(b/2);

    else
    {
        t+=(forest[mx]+forest[mx+1])*(long long)(b/2);
        t+=forest[mx];
    }

    cout<<t;
    return 0;
}