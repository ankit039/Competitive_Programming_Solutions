#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define int ll
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define print(x) cerr << (#x) << "is "<< x << "\n"
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10;
 
void test();

int n,p1,p2,p3;
vector<int> g[N],fen(N),sz(N);
vector<pii> ans[N];

void update(int ind){
   while(ind < n){
      fen[ind]++;
      ind = (ind|(ind+1));
   }
}

int sum(int ind){
   int res = 0;
   while(ind >= 0){
      res += fen[ind];
      ind = (ind & (ind+1))-1;
   }
   return res;
}

int dfs(int u,int p,int val){
   sz[u] = 1;
   int cnt = 0 , mx = 0;
   for(auto &v : g[u]){
      if(v != p){
         sz[u] += dfs(v,u,sum(v));
         int a = sum(u);
         int b = sz[v]-a+val;
         ans[u].pb({a-val,b});
         val = a;
         mx += b;
         cnt += ans[u].back().F;
      }
   }
   ans[u].pb({u-1-cnt,n-u-mx});
   update(u);
   return sz[u];
}

int compute(int node){
   int res = 0;
   if(p2 == 1){
      for(auto &el : ans[node]){
         res = res + el.S*(n-node-el.S);
      }
      res = res/2;
   }else if(p2 == 3){
      for(auto &el : ans[node]){
         res = res + el.F*(node-1-el.F);
      }
      res = res/2;
   }else{
      for(auto &el : ans[node]){
         res = res + el.F*(n-node-el.S);
      }
   }
   return res;
}

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int tt = 1;
   cin >> tt;
   f(i,0,tt) test();   
   return 0;
}

void test(){
   scanf("%d%d%d%d",&n,&p1,&p2,&p3);
   int u,v;
   f(i,1,n+1){
      g[i].clear();
      ans[i].clear();
      fen[i] = 0;
      sz[i] = 0;
   }
   f(i,1,n){
      cin >> u >> v;
      g[u].pb(v);
      g[v].pb(u);
   }
   dfs(1,-1,0);
   int res = 0;
   f(i,1,n+1){
      res += compute(i);
   }
   cout << res << '\n';
}
