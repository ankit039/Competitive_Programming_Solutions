#include <bits/stdc++.h>
using namespace std;
#define loop(i,x,n) for(int i=x;i<n;i++)
#define sf scanf
#define pf printf
#define ll long long int
#define pb push_back
#define mk make_pair
#define mod 1000000009

//Your code goes here

vector<int> v[1000001];
int vis[1000001];
int bfs(int par,int src,int str)
{
    int flag=1;
    queue<pair<int,pair<int,int> > > q;
    q.push(mk(par,mk(src,str)));
    int fpar,fsrc,fstr,siz,adj;
    while(!q.empty())
    {
        fpar=q.front().first;
        fsrc=q.front().second.first;
        fstr=q.front().second.second;
        q.pop();
        vis[fsrc]++;
        if(vis[fsrc]==1)
            flag=0;
        if(fstr>0)
        {
            siz=v[fsrc].size();
            loop(i,0,siz)
            {
                adj=v[fsrc][i];
                if(adj==fpar)
                    continue;
                q.push(mk(fsrc,mk(adj,fstr-1)));
            }
        }
    }
    return flag;
}
int main()
{
	int t,n,r,m,x,y,flag;
	sf("%d",&t);
	while(t--)
    {
        sf("%d%d%d",&n,&r,&m);
        loop(i,0,n+1)
        vis[i]=0,
        v[i].clear();
        loop(i,0,r)
        sf("%d%d",&x,&y),
        v[x].pb(y),
        v[y].pb(x);
        flag=0;
        loop(i,0,m)
        {
            sf("%d%d",&x,&y);
            if(!flag)
            {
                if(bfs(-1,x,y))
                    flag=1;
            }
        }
        loop(i,1,n+1)
        if(!vis[i])
            flag=1;
        if(!flag)
            pf("Yes\n");
        else
            pf("No\n");
    }
	return 0;
}
