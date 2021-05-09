#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<tuple>
#include<algorithm>

using namespace std;
typedef long long ll;

struct cmp{
    bool operator()(tuple<ll, ll, ll> &a, tuple<ll, ll, ll> &b){
        return get<1>(a)< get<1>(b);
    }
    bool operator()(tuple<ll, ll, ll> &a, const ll &b){
        return get<1>(a)<b; 
    }
    bool operator()(const ll &b, tuple<ll, ll, ll> &a){
        return b<get<1>(a);
    }
};

ll last_smaller(vector<tuple<ll, ll, ll>> &a, ll b){
    // auto u = upper_bound(a.begin(), a.end(), b, cmp());
    auto l = lower_bound(a.begin(), a.end(), b, cmp());

    // cout<< get<1>(*k)<<'\n';
    // if(get<1>(*k)==b)prev(k);
    return(l-a.begin());
}

int main(){
    ll a;
    cin>>a;

    vector<tuple<ll, ll, ll>> pjs; //start date, end date, reward
    vector<ll> rew(a+1, 0);

    ll x,y,z;
    for(ll i=0; i<a; i++){
        cin>>x>>y>>z;
        pjs.push_back(tie(x,y,z)); 
    }
    sort(pjs.begin(), pjs.end(), cmp());

    rew[1] = get<2>(pjs[0]);
    for(ll i =2; i<=a; i++){
        rew[i] = max(rew[i-1], rew[last_smaller(pjs, get<0>(pjs[i-1]))]+get<2>(pjs[i-1]));
    }
    // cout<<'\n';
    // for(auto& i:pjs){
    //     cout<<get<0>(i)<<' '<<get<1>(i)<<' '<<get<2>(i)<<' '<<'\n';
    // }
    cout<<rew[a];

    // while(true){
    //     ll b; cin>>b; 
    //     cout<<last_smaller(pjs, b)<<'\n';
    // }
    return 0;
}