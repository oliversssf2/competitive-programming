#include <iostream>
using namespace std;

int main(){
	long long arr[200001] = {0};
	int n;
	long long m;

	long long total=0;
	
	cin >> n;
	for(int i = 1; i<=n; i++){
		cin>>m;
		arr[i]=m;
		if(m<arr[i-1]){
			arr[i]=arr[i-1];
			total+=arr[i-1]-m;
		}
	}
	cout<<total;
				
	return 0;
}


