#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, v;
    cin >> s >> v;
    int time = ceil(float(s)/v)+10;
    int h,m;
    if(time>480){
        time = 480+24*60 - time;
    }
    else time = 480-time;
    h = int(time/60);
    m = time%60;

    printf("%02d:%02d",h, m);
}