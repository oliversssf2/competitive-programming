#include <iostream>
using namespace std;

int main(){
	int max = 0;
	int cur_len =0;
	
	char last;
	char cur;

	while(cin>>cur){
		//cout<<last;
		//cout<<cur<<endl;

		if(cur==last){
			cur_len+=1;
		}
		else{
			if(cur_len>max) max=cur_len;
			cur_len=1;
			last = cur;
		}
		if(cur_len>max) max=cur_len;
		//cout<<cur_len<<endl;
	}
	cout<<max;
	return 0;
}
