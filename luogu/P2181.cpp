#include<bits/stdc++.h>
using namespace std;



int main(){
    unsigned long long side;
    scanf("%llu", &side);

    unsigned long long ans =side*(side-1)/2*(side-2)/3*(side-3)/4; 

    cout << ans;
    return 0;
}