#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sum=0;
    int d=0;
    int count=0;
    for(int i=n-1;i>=0;i--){
        if(count!=k){
            sum+=(d+1)*v[i];
            count++;
        }
        if(count==k){
            d++;
            count=0;
        }
    }
    cout<<sum;
return 0;
}

