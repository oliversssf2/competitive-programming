#include<bits/stdc++.h>
using namespace std;

int main(){
    int a; 
    int max=0;
    int min=1000;
    int sum = 0;
    cin>>a;
    int count = a;
    while(count--){
        int k;
        cin>>k;
        sum+=k;
        if(k>max) max=k;
        if(k<min) min=k;
    }
    cout <<setprecision(2)<<fixed<<float(sum-min-max)/(a-2);
    return 0;
}