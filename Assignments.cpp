/*input
3
3
1 1 1
1 1 1
1 1 1
11
1 0 0 1 0 0 0 0 0 1 1 
1 1 1 1 1 0 1 0 1 0 0 
1 0 0 1 0 0 1 1 0 1 0 
1 0 1 1 1 0 1 1 0 1 1 
0 1 1 1 0 1 0 0 1 1 1 
1 1 1 0 0 1 0 0 0 0 0 
0 0 0 0 1 0 1 0 0 0 1 
1 0 1 1 0 0 0 0 0 0 1 
0 0 1 0 1 1 0 0 0 1 1 
1 1 1 0 0 0 1 0 1 0 1 
1 0 0 0 1 1 1 1 0 0 0 
11
0 1 1 1 0 1 0 0 0 1 0 
0 0 1 1 1 1 1 1 1 1 1 
1 1 0 1 0 0 0 0 0 1 0 
0 1 0 1 0 1 0 1 0 1 1 
1 0 0 1 0 0 0 0 1 0 1 
0 0 1 0 1 1 0 0 0 0 1 
1 0 1 0 1 1 1 0 1 1 0 
1 0 1 1 0 1 1 0 0 1 0 
0 0 1 1 0 1 1 1 1 1 1 
0 1 0 0 0 0 0 0 0 1 1 
0 1 1 0 0 0 0 0 1 0 1
 
*/

// Problem Link : https://www.spoj.com/problems/ASSIGN/
// Author : starboy_jb 
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PII;
typedef pair<ll , ll> PLL;
typedef long double ld;
 
#define pb push_back
#define all(c) c.begin(),c.end()
#define allr(c) c.rbegin(),c.rend()
#define mod 1000000007
#define PI 3.14159265
#define endl '\n'
#define F first
#define S second
#define debug(x) cout << #x << " = " << x << endl;
#define TRACE
 
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
 
#define out(container) cout << #container << " "; for (auto it : container) cout << it << " "; cout << endl;
 
template < typename T> int sz(T x) {return x.size();}
template < typename T > T GCD(T a, T b)            { ll t; while(a) { t = a; a = b % a; b = t; } return b; }
template < typename T > string toString(T a)       { return to_string(a); }
template < typename T > void toInt(string s, T &x) { stringstream str(s); str >> x;}
inline int add(int x, int y){ x += y; if(x >= mod) x -= mod; return x;}
inline int sub(int x, int y){ x -= y; if(x < 0) x += mod; return x;}
inline int mul(int x, int y){ return (x * 1ll * y) % mod;}
inline int powr(int a, ll b){
    int x = 1 % mod;
    while(b){
        if(b & 1) x = mul(x, a);
        a = mul(a, a);
        b >>= 1;
    }
    return x;
}
inline int inv(int a){ return powr(a, mod - 2);}
 
const int N = 21;
 
int arr[N][N];
int n;
ll dp[N][1 << N];
 
ll fun(int ind, int cur) {
  if (ind == n) {
    return 1;
  }
  if (dp[ind][cur] != -1) {
    return dp[ind][cur];
  }
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (!(cur & (1 << i)) && arr[ind][i]) {
      ans += fun(ind + 1, (cur ^ (1 << i)));
    }
  }
  return dp[ind][cur] = ans;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int test;
  cin >> test;
  while (test--) {
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) 
        cin >> arr[i][j];
    }
    ll ans = fun(0, 0);
    cout << ans << endl;
  }
 
  return 0;
} 
