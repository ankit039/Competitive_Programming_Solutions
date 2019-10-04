#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,i,e=0,o=0,e1=0,o1=0,j,w=0;
        set<long long int>s;
        set<long long int>::iterator it,it1;long long int a[1000001]={0};
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            e1=e;o1=o;
            if(i==1)
            {
                s.insert(x);++a[x];
                //cout<<x<<" ";
                if(__builtin_popcount(x)%2==1)
                    o++;
                else
                    e++;
            }
            else if(i>1 && a[x]==0)
            {it1=s.end();
                ++a[x];s.insert(x);
                if(__builtin_popcount(x)%2==0)
                {
                    e+=e1;e++;
                    o+=o1;
                }
                else
                {
                    e+=o1;
                    o+=e1;o++;
                }
                for(it=s.begin();it!=it1;it++)
                {
                    s.insert(x^(*it));
                    ++a[x^(*it)];
                }
            }
            cout<<e<<" "<<o<<endl;
        }
    }
    return 0;
}
