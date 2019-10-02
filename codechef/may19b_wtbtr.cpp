#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,j,flag;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long a[n][2],min=INT_MAX;
	    for(i=0;i<n;i++)
	        cin>>a[i][0]>>a[i][1];
	    long m1[n],m2[n];
	    flag=0;
	    for(i=0;i<n;i++)
	    {
	        m1[i]=a[i][1]-a[i][0];
	        m2[i]=a[i][1]+a[i][0];
	    }
	    sort(m1,m1+n);
	    sort(m2,m2+n);
	    for(i=0;i+1<n;i++)    
	    {
	        min=((m1[i+1]-m1[i])<min)? (m1[i+1]-m1[i]):min;
	        min=((m2[i+1]-m2[i])<min)? (m2[i+1]-m2[i]):min;
	    }
	    cout<<fixed<<showpoint;
	    cout<<setprecision(6)<<(min/2.0)<<endl;
	}
	return 0;
}

