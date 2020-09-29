// https://codeforces.com/contest/1367/problem/B

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define endl "\n"
#define pu push_back           
#define pp pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define IOS() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const long long MOD=1e9+7;
const long double PI = acos(-1);
const long long INF=INT_MAX;
const long long LINF=LLONG_MAX;
 
typedef long long ll;
typedef long double ld;
 
int main()
{
    IOS();
   // #ifndef ONLINE_JUDGE
     //  freopen("input.txt", "r", stdin);
       // freopen("output.txt","w",stdout);
    // #endif 
            
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
    	 a=0;b=0;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    		{
    			cin>>arr[i];
    			if(i%2!=0 && arr[i]%2==0)
    				a++;
    			else if(i%2==0 && arr[i]%2!=0)
    				b++;
    		}
    		//cout<<ans<<" "; 
    		if(a==b)
    			cout<<a<<endl;
    		else
    			cout<<-1<<endl;
 
    }
    return 0;
}
