Problem statement : https://codeforces.com/contest/1150/problem/C

Solution :

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int one = 0, two = 0;
    for(int i=0; i < n; ++i){
        int d;
        cin>>d;
        if(d == 1)  ++one;
        else ++two;
    }
    if(two){
        cout<<"2 ";
        --two;
    }
    if(one){
        cout<<"1 ";
        --one;
    }
    while(two){
        --two;
        cout<<"2 ";
    }
    while(one){
        --one;
        cout<<"1 ";
    }
}
