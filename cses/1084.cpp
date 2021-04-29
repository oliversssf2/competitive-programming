#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n>>m>>k;

    int d_s[n] = {};
    int a_s[m] = {};

    for (int i = 0; i < n; i++){
        cin >>d_s[i];
    }
    for(int i = 0; i < m; i++){
        cin >> a_s[i];
    }

    sort(d_s, d_s+n);
    sort(a_s, a_s+m);

    int i =0;
    int j = 0;
    int num = 0;
    while(i<n&&j<m){
        if(abs(d_s[i]-a_s[j])<=k)
            {i++;j++;num++;}
        else if(d_s[i]>a_s[j]){
            j++;
        }else{
            i++;
        }
    }
    cout << num;


    return 0;

}