#include<bits/stdc++.h>
using namespace std;

unordered_map<string, int> num;
unordered_map<string, int> pos;


int main(){
    string a;
    cin>>a;
    transform(a.begin(), a.end(), a.begin(), ::tolower);

    string b;
    int c=0;
    while(cin>>b)
    {
        transform(b.begin(), b.end(), b.begin(),::tolower);
        ++num[b];
        if(pos.find(b)==pos.end())
            pos[b] = c;
        ++c;
    } 
    if(num.find(a)!=num.end()&&num[a]>0)
        cout<<num[a] << ' ' << pos[a]; 
    else cout << -1;
    
    return 0;
}