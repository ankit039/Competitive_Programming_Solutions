#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS
	#ifndef ONLINE_JUDGE 
    freopen("InFile.txt", "r", stdin); 
    freopen("OutFile.txt", "w", stdout); 
	#endif 
	
	int T;
	cin>>T;
	for(int t=0;t<T;t++){
		int n;cin>>n;
		vector<vector<int> > v;
		v.resize(n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<2;j++)
			{
				int x;
				cin>>x;
				v[i].push_back(x);
			}
		}
		sort(v.begin(),v.end());
	
		map<int,int> f,b;
		
		// Badha Forward padya hoy tyare. f[position] e That position par end thayela timber ni length che.
		for(auto i : v)
		{
			int start,end;
			start = i[0];
			end = i[0] + i[1];
			f[end] = max(f[end],f[start]+i[1]);
		}
		// Badha Backward padya hoy tyare.
		for(int i=n-1;i>=0;i--)
		{
			int start,end;
			start = v[i][0];
			end = v[i][0] - v[i][1];
			b[end] = max(b[end],b[start]+v[i][1]);
		}
		
		int resu = 0; //Maximum Length Timber
		for(auto pos : f)
		{
			int p = pos.first;
			resu = max(resu,f[p]+b[p]);
		}
		for(auto pos : b)
		{
			int p = pos.first;
			resu = max(resu,f[p]+b[p]);
		}
	    cout<<"Case #"<<t+1<<": "<<resu<<endl;
	    
	}
	return 0;
}

