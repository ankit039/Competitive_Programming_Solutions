#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define deb(x) cout<<#x<<" "<<x<<endl
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
    ll n,c=0;
    cin>>n;
    ll a[n];
    unordered_map<ll,vector<ll> > mp;
    unordered_map<ll,ll> b;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    mp[a[0]].push_back(0);
    ll x=a[0];
    b[x]++;
    for(ll i=1;i<n;i++)
     {
         x=x^a[i];
         //deb(x);

         b[x]++;
         mp[x].push_back(i);
         if(x==0)
            c+=i;
     }
     for(auto it=b.begin();it!=b.end();it++)
     {
          //if(it->second>1)
          //{
          ll y=it->first;
         // deb(y);
         ll s=mp[y].size();
         //deb(s);
          for(auto p=0;p<s-1;p++)
          {
             ll z=mp[y][p+1]-mp[y][p]-1;
             //deb(z);
             c+=(s-p-1)*z*(p+1);
          }

          if(s-1>1)
          {
              ll y=((s-2)*(s-1)*s)/6;
              c+=y;
          }
         // }
     }
    cout<<c<<endl;
    b.clear();
    mp.clear();
    }
    return 0;
 }










