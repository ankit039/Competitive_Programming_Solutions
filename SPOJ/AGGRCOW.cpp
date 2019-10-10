#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,c,x[1000000];
 
void getDistance(){
	ll l = 1, r = x[n-1]-x[0], mid;
	while( l < r){
		mid = ceil( (double) (l+r)/2 );
		ll sum = 0, cnt = 1, last = 0;
		for(int i=1;i<n;i++){
			if(x[i]-x[last] >= mid){
				++cnt;
				last = i;
			}
		}
		if(cnt >= c){
			l = mid;
		}else{
			r = mid-1;
		}
	}
	cout<<r<<"\n";
}
 
int main() {
	cin>>t;
	while(t--){
		cin>>n>>c;
		for(int i=0;i<n;i++) cin>>x[i];
		sort(x,x+n);
		getDistance();
	}
	return 0;
} 
