//author : akashksinghal
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const long long mxN = 82451660;
bool prime[mxN + 2];
vector<long long> primes;

void seive()
{

    prime[0] = prime[1] = true;
    for (ll i = 4; i <= mxN; i += 2) {
        prime[i] = true;
    }
    for (ll i = 6; i <= mxN; i += 3) {
        prime[i] = true;
    }
    for (ll i = 5; i * i <= mxN; i++){
        if (!prime[i]) {
            for (ll j = i * i; j <= mxN; j += i) {
                prime[j] = true;
            }
        }
    }
    for (ll i = 2; i <= mxN; i++) {
        if (!prime[i]) {
            primes.push_back(i);
        }
    }
}

signed main()
{
    fasino
    ll t, n;
    cin >> t;
    seive();
    while (t--) {
        cin >> n;
        cout << primes[n - 1] << '\n';
    }
    return 0;
}