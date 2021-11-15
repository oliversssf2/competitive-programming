#include <iostream>
using namespace std;

int main(){
	int arr[200001] = {0};
	int n;
	cin>>n;
	
	int in;
	while(cin>>in){
		arr[in]=1;
	}
	for(int i=1;i<=n;i++){
		if(arr[i]==0){
			cout<<i;
			break;
		}
	} 
	

	return 0;
}
