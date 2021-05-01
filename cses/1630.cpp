#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

typedef long long ll;

using namespace std;

int main(){
    int a;
    cin >>a;
    
    vector<pair<ll, ll>> tasks;

    ll temp1, temp2;
    for(int i=0; i<a; i++){
        cin>>temp1>>temp2;
        tasks.push_back({temp1, temp2});
    }


    sort(tasks.begin(), tasks.end());

    ll time=0;
    ll rew = 0;
    for(auto a:tasks){
        time+=a.first;
        rew+=a.second-time;
        // cout<<a.first << ' ' << a.second << '\n';
    }
    cout<<rew;



    
    return 0;
}