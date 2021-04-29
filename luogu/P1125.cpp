#include<bits/stdc++.h>
using namespace std;

bool isprime(int i){
    if(i==0) return false;
    if(i==1) return false;
    if(i==2) return true;
    for(int j = 2; j<=sqrt(i);j++)
    {
        if(i%j==0) return false;
    }
    return true;
}

int abc[26]={};
int mx = 0;
int mn = 100;

int main(){
    string str;
    cin>>str;
    for(int i = 0; i<str.length(); i++)
    {
        ++abc[str[i]-97];
    }
    for(int i =0; i<str.length(); i++){
        if(abc[str[i]-97]>mx)mx=abc[str[i]-97];
        if(abc[str[i]-97]<mn&&abc[str[i]-97]!=0)mn=abc[str[i]-97];
    }
    if(isprime(mx-mn)){
        cout << "Lucky Word" << '\n' << mx-mn;
    } 
    else cout << "No Answer" << '\n' << 0;
    return 0;
}