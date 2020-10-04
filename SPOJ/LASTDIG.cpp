/* SPOJ */
/* Title - The Last Digit */
/* Created By - Kushagra Saxena */
/* Date - 04/10/2020 */

//Problem link - https://www.spoj.com/problems/LASTDIG/

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
ll modularExpo(ll a, ll n, ll MOD)
{
	ll res = 1;
	while (n > 0)
	{
		if (n % 2 == 0)
			a = (a * a) % MOD, n /= 2;
		else
			res = (res * a) % MOD , n--;
	}
	return res;
}
int main()
{
	fast;
	int t;
	scanf("%d", &t);
	while (t--)
	{
		ll a, b;
		scanf("%lld%lld", &a, &b);
		printf("%lld\n", modularExpo(a, b, 10));
	}
	return 0;
}