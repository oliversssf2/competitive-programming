#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a;
    int max = 1000;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> a;
        if(a < max)
            max = a;
    }
    cout << max;
    return 0;
}