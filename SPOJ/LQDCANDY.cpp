#include <bits/stdc++.h>
using namespace std;
#define loop(i,x,n) for(int i=x;i<n;i++)
#define sf scanf
#define pf printf
#define ll unsigned long long int
#define pb push_back
#define mk make_pair
#define mod 998244353

//Your code goes here
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        long double orig = n;
        long double power = ceil(log2(orig));
        ll z=0;
        while(n>0)
        {
            if(n%2)
                break;
            z++;
            n/=2;
        }
        ll p=power;
        cout<<(long long int)pow(2LL,p)<<" "<<p-z<<endl;
    }
    return 0;
}
