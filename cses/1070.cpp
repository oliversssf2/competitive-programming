#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	if(n<=3&&n>1) cout<<"NO SOLUTION"<<endl;
	else{
		for(int i = 1; i<n; i+=2) cout<< i+1<<' ';
		for(int i = 0; i<n; i+=2) cout<< i+1<<' ';
	}
	return 0;
}
