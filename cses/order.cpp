#include<iostream>
using namespace std;

int smaller(int, int);

// extern int n;
int l;

void init(int n) {
    l = n;    
}
int whereis(int k) {
    // cout<<l;
    // cout<<k;
    int a = 1;
    for(int i=0; i<l; i++)
        for(int j=0; j<l;j++){
            if(smaller(i,j)){
                a++;
                // cout<<a<<endl;
            }
        }
        if(a==k)return i;
    }
    return -1;
}