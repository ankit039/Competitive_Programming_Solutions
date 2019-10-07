
//https://www.codechef.com/MAY18B/problems/DBFB/
//username-jaydavev

#include<bits/stdc++.h>
#define  la 1000000007
typedef long long int ll;

ll feb[1000000];
using namespace std;
map<ll,ll> F;
ll fibb(ll n)
    {
                for (ll i = 2; i <= n; i++)
        {

            feb[i] = (feb[i-1] + feb[i-2])%la;
        }
        return feb[n];
    }
int main()
{
    ll t,n,i,jam,j,m,jem,jre,jtm;
    cin>>t;
    while(t--)
    {
        vector< pair <ll,ll> >lit;
        jam=0;

        cin>>m>>n;

        vector<ll>b;
        vector<ll>c;

        for(i=0;i<m;i++)
        {
            cin>>jam;
            b.push_back(jam);
        }
            for(i=0;i<m;i++)
        {
            cin>>jam;
            c.push_back(jam);
        }
        jam=0;
    if(n>=3){
                feb[0]=1;
        feb[1]=0;
    jem=fibb(n-1);
            for(i=0;i<m;i++)
        {
            jre=(b[i]*jem)%la;

            jam=(jam+(jre*m)%la)%la;
        }
        feb[0]=0;
        feb[1]=1;
    jem=fibb(n-1);
    for(i=0;i<m;i++)
        {
            jre=(c[i]*jem)%la;
                jam=(jam+(jre*m)%la)%la;
        }
    }
    else
    {
        if(n==1){
        for(i=0;i<m;i++)
        {
            jam=(jam+(b[i]*m)%la)%la;
        }
        }
        else{
                for(i=0;i<m;i++)
        {
                jam=(jam+(c[i]*m)%la)%la;
        }
        }
    }
    cout<<jam<<endl;
}
}


