#include <bits/stdc++.h>
using namespace std;
int main() {
//	ios::sync_with_stdio(false);
	string s;
	cin>>s;
	while(s != "#"){
		int x = 0;
		string temp =s ;
		while(next_permutation(s.begin(),s.end())){
			if(temp != s){
				x++;
				cout<<s<<endl;
				break;
			}
		}
		if(x == 0){
			printf("%s\n","No Successor");
			
		}
		cin >> s;
	}
	
}