#include<bits/stdc++.h>
using namespace std;

#define INF ((unsigned) ~0)

void try1(){
	int k[5]= {};
	cout << sizeof(k)<<'\n';
	cout << sizeof(k)/sizeof(k[0]) << '\n';
}

int try2(float a){
	return ceil(a);
}

void try3(){
	int k[4][4] = {{1,2,3,4},{5,6,7,8},{0,0,0,0},{0,0,0,0}};
	int ind;
	while(cin>>ind){
		cout << int(*k[ind]) << '\n';

	}
}

void try4(){
	int a= 4;
	int *p = &a;
	cout << "p: \t" << p << '\n';
	cout << "&a: \t" << &a << '\n';
	cout << "&p: \t" << &p << '\n';
	cout << "*&p: \t" << *&p << '\n';
}

void try5(){
	vector<int> k={1,2,2,3,4,4,4,5,6};
	unique(k.begin(), k.end());

	for(auto i:k){
		cout << i << '\n';
	}
}


int main(){
	int K;
	cin>>K;
	int a[K] = {};
	vector<int> b;

	for(int i = 0;i<K;i++){
		cin>>a[i];
	}
}

