// Codechef August Long Challenge 2019 : Problem 1

// By Mohit Maroliya

#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++)
#define ull unsigned long long int

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        int b[n],a[n],max=0,ans;
        f(i,n) cin>>a[i];
        f(i,n) cin>>b[i];
        f(i,n) 
        {
            ans=((a[i]*20)-(b[i]*10));
            if(ans>=max)
            max=ans;
        }
        cout<<max<<endl;
    }
    return 0;
}
