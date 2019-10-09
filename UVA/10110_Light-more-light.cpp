#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int N = 66000;
vector<int> sieve(66001,0);
ll PF_idx = 2;

void LoadSieve(){
	for(int x = 2;x<=N;x++){
		if(sieve[x]) continue;
		for(int u = 2*x;u<=N;u+=x){
			sieve[u] = 1;
		}
	} 
}

void nextIdx(){
	for(ll i=PF_idx+1;i<=66000;i++){
		if(sieve[i]==0){
			PF_idx = i;
			return;
		}
	}
	PF_idx = -1;
}

ll numDiv(ll n){
	PF_idx = 2;
	ll PF = PF_idx, ans = 1;
	while(PF*PF <= n){
		ll power = 0;
		while(n % PF ==0){
			n /= PF;
			power++;
		}
		ans *= (power+1);
		nextIdx();
		PF = PF_idx;
	}
	if(n != 1) ans*=2;
	return ans;
}

int main() {
	LoadSieve();
	
	ll x;
	while(cin>>x && x!=0){
		ll aux = numDiv(x)%2;
		if(aux == 0){
			cout<<"no\n";
		}else{
			cout<<"yes\n";
		}
	}
	
	return 0;
}
