Problem Statement : https://codeforces.com/contest/1152/problem/A

Solution : 

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    int chest[n],key[m],ce=0,co=0,ke=0,ko=0;
    for(int i=0;i<n;++i){
        cin>>chest[i];
    }
    for(int i=0;i<m;++i){
        cin>>key[i];
    }
    for(int i=0;i<n;++i){
        if(chest[i] % 2 == 0)   ce++;
        else co++;
    }
    for(int i=0;i<m;++i){
        if(key[i] % 2 == 0) ke++;
        else ko++;
    }
    
    int ans = min(ce,ko) + min(co,ke);
    cout<<ans<<endl;
    return 0;
}
