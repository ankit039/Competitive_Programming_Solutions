#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    long long int n, m;
    for(int i = 0; i < t; i++) {
        long long int k = 0;
        cin>>n>>m;
        while(n!=0&&m!=0){
            if (n==m||(n>m&&n%m==0)||(n<m&&m%n==0)){
                k++;
                n=0;
            }
            else if (n>m) {
                int x = n/m;
                if(x>=2){
                    k++;
                    break;
                }
                else{
                    n=n-(x*m);
                }
                k++;
            }
            else {
                int y = m/n;
                if(y>=2){
                    k++;
                    break;
                }
                else{
                    m=m-(y*n);
                }
                k++; 
            }
        }

        if(k%2!=0){
            cout<<"Ari"<<endl;
        }
        else
        {
            cout<<"Rich"<<endl;
        }
    }
}
