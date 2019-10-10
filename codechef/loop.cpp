/*
program link :https://www.codechef.com/MAY19B/problems/MATCHS/
*/using namespace std;
#define pb push_back
#define all(a) a.begin(),a.end()

using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
const int MOD = 1e9+7;
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    long long int t;
 cin>>t;
 while(t--)
 {
  long long int m,n,x,y;
   cin>>m>>n;
     x=max(m,n);
     y=(m+n)-x;
     if(m==n||x%y==0)
     {
     cout<<"Ari"<<endl;
     continue;
     }
     int f=1;
     while(true)
     {
       if(x%y==0||x/y>1)
       {
         if(f==1)
           cout<<"Ari"<<endl;
         else
         {
           cout<<"Rich"<<endl;
         }
         break;
       }
       x=x-y;
       m=x;
       n=y;
       x=max(m,n);
       y=(m+n)-x;
       f=f*-1;
       
     }
  
 }
}
