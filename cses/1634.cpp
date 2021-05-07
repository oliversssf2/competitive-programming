#include<iostream>
#include<cstring>

using namespace std;
typedef long long ll;

int main(){
    int a, b;
    cin>>a>>b;

    ll coin[a];
    memset(coin, 0, sizeof(coin));

    for(int i =0; i<a; i++){
        cin>>coin[i];
    }

    ll num[b+1];
    memset(num, -1, sizeof(num));

    num[0] = 1;
    for(int a : coin){
        if(a<=b)
            num[a] = 1;
    }

    for(int i = 1; i<=b; i++){
       for(int j = 0;j<a; j++){
           if((i-coin[j]>0)&&num[i-coin[j]]!=-1){
               if(num[i]==-1) num[i]=num[i-coin[j]]+1;
               else{
                   num[i] = min(num[i], num[i-coin[j]]+1);
               }
           }
       } 
    }
    cout<<num[b];
    int arry[100000];

    
}