#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;

    if(a==1){
        cout<<1;
        return 0;
    }

    // setbuf(stdout,NULL);

    int b[a+1] = {};
    b[2] = 1;
    int ind = 2;
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
            if(j==2){
                b[ind]=1;
                break;
            } 
        }
        cout<<ind <<' ';
    }
    return 0;
}