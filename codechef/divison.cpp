/*
username:lazyguy2000
program link:https://www.codechef.com/ZCOPRAC/problems/ZCO14003/
*/
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
  ll n;
    cin>>n;
    ll bud[n];
    for(int i=0;i<n;i++)
    {
        ll budget;
        cin>>budget;
        bud[i]=budget;
    }
    sort(bud,bud+n);
    ll ans=0,res=0;
    for(int i=n,j=0;i>0;i--,j++)
    {
        res=bud[j]*i;
        if(res>ans)
            ans=res;
    }
    cout<<ans<<endl;
    return 0;
}
