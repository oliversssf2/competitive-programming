#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c[a] = {};
    for(int i = 0;i<a;i++){
        cin>>c[i];
    }
    sort(c,c+a);
    int i = 0,j=a-1;
    int ans = 0;
    while(i<=j){
        if((c[i]+c[j])<=b){
            j-=1; 
            i+=1;
            ans++;
        }else{
            j--;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}