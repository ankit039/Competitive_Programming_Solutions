#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int x1, x2, v1, v2, c = 0, s = 0, i,j=0; 
    cin>>x1>>v1>>x2>>v2;
    for(i=0;i<10000;i++)
    {
        {x1=x1+v1;j++;}
        {x2=x2+v2;s++;}
        if(x1==x2)
            c++;
        if(s==j&&c!=0)
           { cout<<"YES";
            return 0;
           }
    }
    cout<<"NO";
    return 0;
}
