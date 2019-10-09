/* program link: https://codeforces.com/contest/1176/problem/B */


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define str string
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif	
long long t,i,x,k,a,n,ans,ans1,ans2;
cin>>t;
 
while(t--){
	cin>>n;int	ans=ans1=ans2=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
			if(x%3==0)	
				ans++;
	else if(x%3==1)	
		ans1++;
	else if(x%3==2)	
		ans2++;
	}
	if(ans1<=ans2)
	{
			ans+=ans1;
			ans2-=ans1;	
			ans+=(ans2/3);
			ans1=0;
	}
	else
	{
			ans+=ans2;
			ans1-=ans2;	
			ans+=(ans1/3);
			ans2=0;
	}
cout<<ans<<endl;
}
}
