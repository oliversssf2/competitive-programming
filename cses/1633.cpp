#include<iostream>
#include<cstring>

typedef long long ll;
using namespace std;


int main(){
    int a;
    cin>>a;

    ll arry[a+1];
    memset(arry, 0, sizeof(arry));

    // for(int i =0; i<a+1;i++) cout<<arry[i];
    
    for(int i = 1; i<=6;i++)
        if(i<=a)
            arry[i] = 1;
    for(int i = 2;i<=a;i++){
        for(int j=1; j<=6; j++){
            if((i-j)>0) arry[i] = (arry[i]%int(1000000007)+arry[i-j]%int(1000000007))%int(1000000007);
        }
    }
    cout<<arry[a];

    return 0;
}