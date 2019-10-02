#include<bits/stdc++.h>
typedef unsigned long long int type;
using namespace std;
#define M 1000000007
int main()
{
    int t,n;
    cin>>t;
    type arr[1000007];
    arr[0]=1;
    for(int i=1;i<1000007;i++)
    {
      arr[i]=((arr[i-1]*i)%M);
    }
    while(t--)
    {
        cin>>n;
        cout<<(arr[n+1]-1)%M<<endl;
    }
    return 0;
}
