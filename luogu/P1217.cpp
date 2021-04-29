#include<bits/stdc++.h>
using namespace std;

int prime[100000001] = {};

void cons_prime(int k ){
    int lim = sqrt(k);
    for(int i=0; i<k+1;i++){
        prime[i] = 1; //setting all number to be prime
    }
    for(int i = 2; i<k+1; i++){
        if(prime[i]==0)
            continue;
        for(int j =2* i; j<k+1; j+=i)
            prime[j] = 0;
    }
}

int is_pd(int x){
    int y = x;
    int num=0;

    while(y>0){
        num=num*10+y%10;
        y/=10;
    }
    // return num;
    if(num==x){
        return true;
    }
    else return false;
}

int main(){
    
    int min,max;
    cin >> min >> max;
    if(max>10000000){max=9999999;}
    cons_prime(max);
    
    for(int i = min; i<=max; i++){
        if(prime[i]&&is_pd(i)){
            cout<<i<<'\n';
        }
    }
    // while(cin>>l){
    //     cout << prime[l] << '\n';
    // }
    // while(cin>>l){
    //     cout<<is_pd(l)<<'\n';
    // }
    return 0;
}
