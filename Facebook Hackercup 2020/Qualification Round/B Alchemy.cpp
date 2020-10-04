#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	#ifndef ONLINE_JUDGE 
    freopen("InFile.txt", "r", stdin); 
    freopen("OutFile.txt", "w", stdout); 
	#endif 
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int n,cnt=0;cin>>n;
		string str;
		cin>>str;
		for(char x : str)
		{
			if(x == 'A')
			{
				cnt = cnt + 1;
			}else
			{
				cnt = cnt - 1;
			}
		}
		if(abs(cnt) != 1)
		{
			cout<<"Case #"<<t+1<<": N"<<endl;    	
		}else
		{
			cout<<"Case #"<<t+1<<": Y"<<endl;    	
		}
	    
	}
	return 0;
}

