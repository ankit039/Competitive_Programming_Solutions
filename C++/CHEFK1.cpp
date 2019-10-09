#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n==1){
            if(m==0||m==1)
                cout<<m<<endl;
            else
                cout<<-1<<endl;
        }
        else if(n==2){
            if(m>=n-1&&m<=3){
                if(m>=n)
                    cout<<2<<endl;
                else
                    cout<<1<<endl;
            }
            else
                cout<<-1<<endl;
        }
        else{
            ll y=n*(n+1)/2;
            if(m>=n-1&&m<=y){
                if(m>=n-1&&m<=n+1)
                    cout<<2<<endl;
                else{
                    ll x=n+2;
                    if(m>=x&&m<=2*n)
                        cout<<3<<endl;
                    else{
                        x=2*n+1;
                        ll cnt=3,z=-1;
                        while(m>=x&&m<=y){
                            cnt++;
                            if(n%2==1){
                                if(z==-1){
                                    x+=n/2;
                                    z=1;
                                }
                                else{
                                    x+=n/2+1;
                                    z=-1;
                                }
                            }
                            else{
                                x+=n/2;
                            }
                            if(cnt==n)
                                break;
                        }
                        cout<<cnt<<endl;
                    }
                }
            }
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}
