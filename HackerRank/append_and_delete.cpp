#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a; i<b; i++)
#define fr(i,a,b) for(i=a; i>=b; i--)
#define endl '\n'
#define ll long long int
#define ff(x) first(x)
#define ss(x) second(x)
#define pb(x) push_back(x)
#define mp make_pair
#define mod 1000000007
#define sz(x) ((int) (x).size())

using namespace std;

int main() 
{
    string s, t;
    int k;
    cin>>s>>t>>k;
    int p = 0;
    while (p < min(sz(s), sz(t)) && s[p] == t[p])
        ++p;
    int vmin;
    if (k % 2 == (sz(s) + sz(t)) % 2)
        vmin = sz(s) + sz(t) - 2 * p;
    else
        vmin = sz(s) + sz(t) + 1;
    if (k < vmin)
        cout << "No\n";
    else
        cout << "Yes\n";
}
