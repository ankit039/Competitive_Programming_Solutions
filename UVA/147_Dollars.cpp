#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int coins[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
	
	long long int dp[30001];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	
	for(int i=0; i<11; i++){
		for(int j=coins[i]; j<=30000; j++){
			dp[j] += dp[j-coins[i]];
		}
	}
	
	int a, b;
	while(scanf("%d.%d", &a, &b)==2 && (a || b)){
		printf("%3d.%02d%17lld\n", a, b, dp[a*100 + b]);
	}

	return 0;
}
