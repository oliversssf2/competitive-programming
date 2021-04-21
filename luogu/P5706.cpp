#include<bits/stdc++.h>
using namespace std;

int main(){
    float a;
    int b;
    cin>>a>>b;
    float out = a/b;

    cout << setprecision(3) << fixed << out << '\n' << 2*b;
    return 0;
}