// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>

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


void gen_subset(int k, vector<int>& in, vector<int>& out){
	if(k == in.size()+1){
		if(out.size()==0){printf("{empty}");}
		else{
			for (auto k:out){
			printf("%d ", k);
			}		
		}
		printf("\n");
	} else{
		out.push_back(in[k-1]);
		gen_subset(k+1, in, out);
		out.pop_back();
		gen_subset(k+1, in, out);
	}
}

void gen_permutation(vector<int>& in, vector<int>& permutation, bool* chosen){
	if(permutation.size() == in.size()){
		for(auto a:permutation){
			printf("%d ", a);
		}
		printf("\n");
	}else{
		for(int i = 1; i<= in.size(); i++){
			if(chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(in[i-1]);
			gen_permutation(in, permutation, chosen);
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}


int main(){
	// vector<int> a = {1,2,3};
	// vector<int> b;
	// bool chosen[4]{0};
	// gen_permutation(a,b,chosen);
	int a = 1<<10;

	cout<<a<<'\n';
	

	// gen_subset(1, a, b);
}

