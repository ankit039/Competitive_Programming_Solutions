//Codechef August Long Challenge 2019 : Problem 2

//Mohit Maroliya


#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++)
#define ull unsigned long long int

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ull n,k;
        cin>>n>>k;
        if((n/k)%k == 0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}
