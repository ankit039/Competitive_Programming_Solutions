#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int z=0,i;
    string s1;
       cin>>s1;

       for(i=0;i<s1.length();i++)
       {
           if(s1[i]=='<' && s1[i+1]=='>')
           {
               z++;
           }
       }
       cout<<z<<"\n";

    }
}
