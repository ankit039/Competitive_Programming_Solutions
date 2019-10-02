#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		long long int m,n,r1,rev1=0,rev2=0;
		cin>>m>>n;
		while(m)
		{
			r1=m%10;
			rev1=rev1*10+r1;
			m=m/10;
		}
		while(n)
		{
			r1=n%10;
			rev2=rev2*10+r1;
			n=n/10;
		}
		m=rev1+rev2;
		rev1=0;
		while(m)
		{
			r1=m%10;
			rev1=rev1*10+r1;
			m=m/10;
		}
		cout<<rev1<<endl;
	}
	return 0;
}
