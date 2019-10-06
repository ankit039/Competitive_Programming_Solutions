//Codechef September LunchTime 2019 : Problem 1
//By  Mohit Maroliya


#include<bits/stdc++.h>
using namespace std;
//memset(a, 0, sizeof(a));
int main()
{
    int t,m,n,a[1000000],temp,k,flag,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        i=0;
        flag=0;
        memset(a, 0, sizeof(a));
        for(i=0;i<m; )
        {
            k=n;
            memset(a, 0, sizeof(a));
            while(k-- && i<m)
            {
                cin>>temp;
                i++;
                if(a[temp]==0)
                    a[temp]++;
                else
                {
                    flag=1;
                    //break;
                }
                //cout<<"taken input "<<i<<"and value="<<a[temp]<<"\n";
            }
            //if(flag==1)
                //break;
        }
        if(flag==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
