#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int ind(int k){
    int l = 0;
    for(int i=1; i<=k; i++){
        l+=pow(2, i);
    }
    return l;
}

int main(){
    int a;cin>>a;
    int len = pow(2, a+1)-2;
    vector<ll> prop(len, 0);
    vector<ll> val(len, 0);

    // for(auto k:prop)cout<<k;

    int tmp;
    for(int i = 0; i<prop.size(); i+=2){
        cin>>tmp;
        prop[i] = tmp;
        prop[i+1] = 100-tmp;
    }

    val[0] = prop[0]; val[1] = prop[1];

    for(int i = 1; i<a; i++){
        for(int j=0; j<pow(2, i+1);j+=2){
            val[ind(i)+j]=val[ind(i)-pow(2,i)+(j/2)]*prop[ind(i)+j];
            val[ind(i)+j+1]=val[ind(i)-pow(2,i)+(j/2)]*(100-prop[ind(i)+j]);
        }
    }

    // cout<<val.size()-pow(2,a)-1<<'\n';
    for(int i=val.size()-pow(2,a); i<val.size(); i++){
        ll gcd = __gcd(val[i],ll(pow(100, a)));
        cout<<ll(val[i]/gcd)<<' '<<ll(pow(100,a)/gcd)<<'\n';;
    }
    

    return 0;
}