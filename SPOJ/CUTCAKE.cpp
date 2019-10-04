#include <bits/stdc++.h>
using namespace std;
#define loop(i,x,n) for(int i=x;i<n;i++)
#define sf scanf
#define pf printf
#define ll long long int
#define pb push_back
#define mk make_pair
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long double n;
        cin>>n;
        long double x=ceil((sqrt(8.0*n-7.0)-1.0)/2.0);
        long long p=x;
        cout<<p<<endl;
    }
    return 0;
}
