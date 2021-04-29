#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;

    long long l[a] = {};
    long long m[a] = {};
    for(int i=0;i<a;i++){
        cin>>l[i];
    }
    m[0] = l[0];
    for(int i = 1;i<a;i++){
        m[i] = max(l[i], l[i]+m[i-1]);
    }
    long long o = *max_element(m, m+a);
    cout<<o;
    return 0;
}