#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >>a;

    int lst[a] = {};
    for(int i = 0; i<a; i++){
        cin>>lst[i];
    }
    sort(lst, lst+a);

    int last = -1;
    int c =0;
    for(int i =0; i<a; i++){
        if(lst[i]!=last) c++;
        last = lst[i];
    }
    cout << c;

    return 0;
}