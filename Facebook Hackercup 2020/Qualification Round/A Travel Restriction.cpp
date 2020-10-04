#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


void ANS(vector<vector<char> > &R,int i, int j)
{
	if(i<j){
		if(R[i][j-1] == 'Y' && R[j-1][j] == 'Y'){
			R[i][j] = 'Y';
		}
	}else{
		if(R[i][i-1] == 'Y' && R[i-1][j] == 'Y'){
			R[i][j] = 'Y';
		}
	}
}
int32_t main()
{
	#ifndef ONLINE_JUDGE 
    freopen("InFile.txt", "r", stdin); 
    freopen("OutFile.txt", "w", stdout); 
	#endif 
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++){
		int n;cin>>n;
		vector<char> I,P;
		
		for(int i=0;i<n;i++){
			char tmp;cin>>tmp;
			I.push_back(tmp);
		}
		for(int i=0;i<n;i++){
			char tmp;cin>>tmp;
			P.push_back(tmp);
		}
		vector<vector<char> > R(n);
		
		for(int i=0;i<n;i++){
			R[i].resize(n);
			for(int j=0;j<n;j++){
				if(abs(i-j) == 0){
					R[i][j] = 'Y';
				}else if(abs(i-j) == 1 && (P[i]=='Y' && I[j]=='Y')){
					R[i][j] = 'Y';
				}else{
					R[i][j] = 'N';
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(abs(i-j)>1 && R[i][j]=='N'){
					ANS(R,i,j);
				}
			}
		}
		
	    cout<<"Case #"<<t+1<<": "<<endl;
	    for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<R[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}

