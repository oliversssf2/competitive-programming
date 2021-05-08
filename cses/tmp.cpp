#include<iostream>
#include<vector>

typedef long long ll;

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    vector<int> x1(a, 0);
    vector<int> x2(b, 0);

    for(int& _:x1) cin>>_;
    for(int& _:x2) cin>>_;

    sort(x1.begin(), x1.end(), [](int k1, int k2){return k2<k1;});
    sort(x2.begin(), x2.end(), [](int k1, int k2){return k2<k1;});

    if(x1[0])

    return 0;
}