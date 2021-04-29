#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,d;
    cin>>a>>d;

    if(a==1){
        cout<<1;
        return 0;
    }

    // setbuf(stdout,NULL);

    int b[a+1] = {};
    b[d] = 1;
    int ind = d;
    cout<<ind <<' ';
    for(int i = 0; i<a-1; i++){
        int j=0;
        while(1){
            if((ind+1)!=a){
                ind = (ind+1)%a;
            }else ind = ind+1;
            if(b[ind]==0){
                j++;
            }
            if(j==d){
                b[ind]=1;
                break;
            } 
        }
        cout<<ind <<' ';
    }
    return 0;
}