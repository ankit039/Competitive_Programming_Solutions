// PROBLEM LINK:- https://www.spoj.com/problems/HORRIBLE/
#include<bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<bitset>
#include<unordered_map>
#define testcases ll t; cin>>t; while(t--)
using namespace std;
#define fio ios_base::sync_with_stdio(false)
#define For(i,a,b) for(ll i=a; i<=b; i++)
#define RFor(i,a,b) for(ll i=a, i>=b; i--)
#define pii pair<ll,ll>
#define ll long long
#define pb push_back
#define mp(x,y) make_pair(x,y)
#define debug(x) cout<< #x <<"="<<x<<endl
#define INF 1000000009
#define N 300005
#define MOD 1000000007
#define S(x) scanf("%d", &x)
#define S2(x,y) scanf("%d%d", &x,&y)
#define P(X) printf("%d\n", x)
#define PI 3.1415926535
#define SIZE 10000007
using namespace std;
typedef priority_queue<ll, vector<ll > > max_pq;
typedef priority_queue<ll, vector<ll> , greater<ll > > min_pq;
ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
        //use cerr if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif
#define nn 2000005

template<typename... T>
void read(T&&...args){ //
    ((cin>>args), ...);
}

template<typename... T>
void write(T...args){
    ((cout<<args<<" "), ...);
}

void LazyUpdateRangeSum(ll *segTree, ll *lazy, ll low, ll high, ll pos )
{
    if ( low != high )
    {
        lazy[2*pos+1] += lazy[pos];
        lazy[2*pos+2] += lazy[pos];
    }
    segTree[pos] = segTree[pos] + (lazy[pos]*(high-low+1));
    lazy[pos] = 0;
}

void BuildTreeRangeSum(ll *segTree, ll input[], ll low, ll high, ll pos){
    if(high==low){
        segTree[pos] = input[low];
        return;
    }

    ll mid = (high+low)/2;
    BuildTreeRangeSum(segTree, input, low, mid, 2*pos+1);
    BuildTreeRangeSum(segTree, input, mid+1, high, 2*pos+2);
    segTree[pos] = segTree[2*pos+1]+segTree[2*pos+2];
}

void UpdateRangeSum(ll *segTree, ll *lazy, ll delta, ll qlow, ll qhigh, ll low, ll high, ll pos){
    if(low>high){
        return;
    }
    LazyUpdateRangeSum(segTree, lazy, low, high, pos);
    // no overlap
    if(qlow>high or qhigh<low){
        return;
    }

    //total overlap
    if(qlow<=low and qhigh>=high){
        lazy[pos] += delta;
        LazyUpdateRangeSum(segTree, lazy, low, high, pos);
        return;
    }

    //partial overlap
    ll mid = (low+high)/2;

    UpdateRangeSum(segTree, lazy, delta, qlow, qhigh, low, mid, 2*pos+1);
    UpdateRangeSum(segTree, lazy, delta, qlow, qhigh, mid+1, high, 2*pos+2);
    segTree[pos] = segTree[2*pos+1]+segTree[2*pos+2];
}

ll lazyQueryRangeSum(ll *segTree,ll *lazy,ll qlow,ll qhigh,ll low,ll high, ll pos){
    if(low>high){
        return 0;
    }
    LazyUpdateRangeSum(segTree, lazy, low, high, pos);

    //no overlap;
    if(qhigh<low || qlow>high){
        return 0;
    }

    //total overlap
    if(qlow<=low && qhigh>=high){
        return segTree[pos];
    }

    //partial overlap
    ll mid = (low+high)/2;
    return lazyQueryRangeSum(segTree, lazy, qlow, qhigh, low, mid, 2*pos+1)+lazyQueryRangeSum(segTree, lazy, qlow, qhigh, mid+1, high, 2*pos+2);    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    testcases{
        ll n,c;
        cin>>n>>c;
        ll segTree[2*N];
        ll lazy[2*N];
       
        ll input[N];
        for(ll i=0; i<=n-1;i++){
            input[i]=0;
        }
        BuildTreeRangeSum(segTree, input,1,n,0);

        while(c--){
            ll type;
            cin>>type;
            if(type==0){
                ll p,q,v;
                cin>>p>>q>>v;
                UpdateRangeSum(segTree, lazy, v, p,q,1,n,0);
            }
            else if(type==1){
                ll p,q;
                cin>>p>>q;
                cout<<lazyQueryRangeSum(segTree, lazy, p,q,1,n,0)<<endl;
            }
        }

        for(ll i=0; i<=4*n; i++){
            lazy[i]=0;
            segTree[i]=0;
        }

        //cout<<endl;
    }
}
