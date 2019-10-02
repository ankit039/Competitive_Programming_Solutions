//https://www.codechef.com/problems/MARSWA

#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
using namespace std;
int main()
{
    long long int i;
	cin>>i;
	while(i--)
	{
       long long int n,t,y,k,q,w,e,r;
        cin>>n>>t>>y>>k;
        q=n/t;
        w=n/y;
        e=boost::math::lcm(t, y);
    
        r=q+w-(2*(n/e));
	    
		if(r>=k)
		cout<<"Win"<<endl;
		else
		cout<<"Lose"<<endl;
	}
return 0;	
}
