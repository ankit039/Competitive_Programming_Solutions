#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b))

#ifdef ONLINE_JUDGE
#define MAX 2000005
#else
#define MAX 100000
#endif

int a[MAX],b[MAX];
char s[MAX],r[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n,m,k,l,x,y,z,flag,count,d,mx,mn;
	long long int sum,prod;

	scanf("%d",&test);

	while(test--){
	
		scanf("%d",&n);
		flag=x=y=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]==0 && !flag){
				flag=i+1;
				x++;
				y++;
			}else if(a[i]==0)
				x++,y++;
			else if(flag)
				y++;
		}
		printf("%lld\n",1ll*x*1000+1ll*100*y);
	}
	return 0;
}
