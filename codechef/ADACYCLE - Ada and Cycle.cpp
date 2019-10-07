#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb(x) push_back(x);
#define mp(x,y) make_pair(x,y)
#define X first
#define Y second
typedef long long int ll;
typedef pair<ll,ll> pp;

#define debug(x) cout << #x << " :: "<< x <<"\n";
#define debug2(x,y) cout << #x << " :: "<< x << "\t" << #y << " :: " << y << "\n";
#define debug3(x,y,z) cout << #x << " :: "<< x << "\t" << #y << " :: " << y << "\t" << #z << " :: " << z << "\n";
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree< pair<ll,ll> , null_type,less< pair<ll,ll> >, rb_tree_tag,tree_order_statistics_node_update>

vector<ll> adj[2001];
ll n;

bool cycle(ll s,ll &ans)
{
    bool visit[n+1];
    ll p[n+1];
    memset(visit,false,sizeof(visit));
    memset(p,-1,sizeof(p));
    visit[s]=true;
    queue<ll> q;
    q.push(s);
    while(!q.empty())
    {
        ll v=q.front();
        q.pop();
        for(ll u:adj[v])
        {
            if(!visit[u])
            {
                q.push(u);
                visit[u]=true;
                p[u]=v;
            }
            else if(u==s)
            {
                vector<ll> path;
                for(int i=v;i!=-1;i=p[i])
                    path.pb(i);
                ans=path.size();
                return true;
            }
        }
    }
    return false;
}

int main()
{
    boost
    cin >> n;
    ll a[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];
            if(a[i][j])
                adj[i].pb(j);
        }
    }
    bool visit[n+1];
    for(ll i=1;i<=n;i++)
    {
        ll ans=INT_MAX;
        if(!cycle(i,ans))
            cout << "NO WAY\n";
        else
            cout << ans << "\n";
    }
    return 0;
}
