#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,t,a,b,m,n,i,c=0,f=0;
    cin>>s>>t>>a>>b>>m>>n;
    long long int p[m],q[n];
    for(long long int i=0;i<m;i++)
        cin>>p[i];
    for(long long int i=0;i<n;i++)
        cin>>q[i];
    for(i=0;i<m;i++)
        {
            if(a+p[i]>=s&&a+p[i]<=t)
                c++;
        }
    for(i=0;i<n;i++)
        {
            if(b+q[i]<=t&&b+q[i]>=s)
                f++;
        }
    cout<<c<<endl<<f;
    return 0;
}
