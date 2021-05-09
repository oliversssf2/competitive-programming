#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

double sum(double prices[], double discount, int first, int last, double k, int c){
    if(first==last) return k;
    double last_c = 0;
    for(int i =0; i<c; i++)
        {last_c+=prices[last-i];}

    double a = prices[first] + sum(prices, discount, first+1, last, k, c);
    double b = prices[first]*0.75 + sum(prices, discount, first+1, last, k,c);
    double c = last_c+ sum(prices, discount, first+1, last-c, k,c);
    double l[3] = {a,b,c};
    sort(l, l+3);

    return l[0];
}

int main(){
    int a,b;
    cin>>a>>b;
    while(b--){
        int c, d;
        cin>>c>>d;
        double discount = double(d/100);
        double prices[a]{};
        for(int i=0; i<a; i++){
            cin>>prices[i];
        }
        cout<<sum(prices, discount, 0, a-1, 0, c);
    }

}