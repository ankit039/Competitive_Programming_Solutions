#include <bits/stdc++.h>
using namespace std;
#define loop(i,x,n) for(int i=x;i<n;i++)
#define sf scanf
#define pf printf
#define ll long long int
#define pb push_back
#define mk make_pair
#define mod 1000000007
//Your code goes here
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        ll total=0,cnt=0,ans=0;
        loop(i,0,len)
        if(s[i]=='K')
            total++;
        loop(i,0,len)
        {
            if(s[i]=='E')
            {
                ans+=(cnt*(total-cnt));
            }
            else if(s[i]=='K')
                cnt++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
