//https://www.codechef.com/COOK110B/problems/MATCHES/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int a,b;
        unsigned long long int sum,n,r,sum1=0;
        cin>>a>>b;
        sum=a+b;
        n=sum;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            if(r==1)
            sum1=sum1+2;
            if(r==2||r==3||r==5)
            sum1=sum1+5;
            if(r==4)
            sum1=sum1+4;
            if(r==8)
            sum1=sum1+7;
            if(r==7)
            sum1=sum1+3;
            if(r==0||r==6||r==9)
            sum1=sum1+6;
        }
        cout<<sum1<<endl;
        
        
    }
return 0;  
}
