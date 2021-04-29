#include<bits/stdc++.h>
using namespace std;

int main(){
    int max;
    cin >> max;
    if(max<2){
        cout << 0;
    }
    else{
        int prime[200] = {};
        prime[0] = 2;
        int count = 1;
        int weight = 2;
        for(int i = 3; i <= max; i++){
            bool isprime =true;
            for(int j=0; j<count; j++){
                if(i%prime[j]==0){
                    isprime=false;
                    break;
                }
            }
            if(isprime){
                int temp = weight+i;
                if(temp<=max){
                    prime[count] = i;
                    count++;
                    weight = temp;

                }
                else{break;}
                
            }
        }

        for(int i=0; i<count; i++){
            cout << prime[i] << '\n';
        }
        cout << count;
        }
  
    return 0;
}