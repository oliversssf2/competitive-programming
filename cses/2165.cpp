#include <iostream>
using namespace std;
int hcount =0;

int tower(int n, int source, int des, int via){
	if(n==1){
		cout<<source+1<<' '<<des+1<<endl;
		hcount++;
	}
	else{
		tower(n-1, source, via, des);
		cout<<source+1<<' '<<des+1<<endl;
		hcount++;
		tower(n-1, via, des, source);
	}

}


int main(){
	int in;
	cin >> in;

	tower(in, 0, 2,1);
	cout<<hcount;
	return 0;
}
