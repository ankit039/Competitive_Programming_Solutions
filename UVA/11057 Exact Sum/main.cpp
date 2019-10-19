#include <bits/stdc++.h>
using namespace std;

void getAns(vector<int> v, int m){
	for(int j = 0; j < v.size(); j++){
		int i = v[j];
		int x = m - i;
		if(binary_search(v.begin(),v.end(),x)){
			cout<<"Peter should buy books whose prices are "<<i<<" and "<<x<<"."<<endl;
			return;
		}
	}
}

int main() {
	int N;
	while(cin>>N){
		vector<int> v;
		for(int i = 0; i < N; i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		int m;
		cin>>m;
		getAns(v,m);
	}
	
	
}