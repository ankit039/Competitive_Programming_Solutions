//https://codeforces.com/contest/1353/problem/F

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define endl "\n"
#define pu push_back           
#define pp pop_back
#define all(v) v.begin(),v.end()
#define int long long
#define rall(v) v.rbegin(),v.rend()
#define IOS() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const long long MOD=1e18;
const long double PI = acos(-1);
const long long INF=INT_MAX;
const long long LINF=LLONG_MAX;
const int N=102,M=102;

typedef long long ll;
typedef long double ld;

int a[102][102], dp[102][102];
int n, m;  
int func(int x,int y,int val)
{
    if (x==(n-1)&&y==(m-1)) 
    {
        if (a[x][y] < val) 
            return dp[x][y] = 1e18;
        else 
            return dp[x][y] = (a[x][y] - val);
    }
    if (x >= n || y >= m) 
        return 1e18;
    if(a[x][y]<val)
        return 1e18;
    if(dp[x][y]!=-1)
        return dp[x][y];
     
    int c=a[x][y]-val;
    return dp[x][y]=c+min(func(x,y+1,val+1),func(x+1,y,val+1));
} 
 
 
signed main()
{
    IOS();
   // #ifndef ONLINE_JUDGE
     //  freopen("input.txt", "r", stdin);
       // freopen("output.txt","w",stdout);
    // #endif
    int t;
    int ans; 
    cin>>t;
    while(t--)
    {
    	ans=1e18;
    	cin>>n>>m;
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    		{
    			cin>>a[i][j];
    		}
    	}
    	
    	
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    			{
    				for(int i1=0;i1<n;i1++)
    	{
    		for(int j1=0;j1<m;j1++)
    		{
    			   dp[i1][j1]=-1;
    		           
    		}
        }
    				
    			 int value=a[i][j]-(i+j);
       			 ans =min(ans,func(0,0,value));
       			 
  
    		    }
    	}
    	cout<<ans<<endl;
    }
}
