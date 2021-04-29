#include<bits/stdc++.h>
using namespace std;

int main(){
    char k[100];
    memset(k, 0, 100);
    cin>>k;
    for(int i=0; i<100; i++){
        putchar(toupper(k[i]));
    }
    return 0;
}