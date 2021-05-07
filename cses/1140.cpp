#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<tuple>

using namespace std;
typedef long long ll;

struct cmp{
    bool operator()(tuple<int, int, int> &a, tuple<int, int, int> &b){
        return get<1>(a)< get<1>(b);
    }
    bool operator()(tuple<int, int, int> &a, int b){
        return get<1>(a)<b;
    }
};


int main(){
    int a;
    cin>>a;

    vector<tuple<int, int, int>> pjs; //start date, end date, reward
    vector<int> rew(a+1, 0);

    int x,y,z;
    for(int i=0; i<a; i++){
        cin>>x>>y>>z;
        pjs.push_back(tie(x,y,z)); 
    }
    sort(pjs.begin(), pjs.end(), cmp());

    for(auto& i:pjs){
        cout<<get<0>(i)<<' '<<get<1>(i)<<' '<<get<2>(i)<<' '<<'\n';
    }

    return 0;
}