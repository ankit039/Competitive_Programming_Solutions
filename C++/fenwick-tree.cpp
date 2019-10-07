/*FENWICK TREE */
#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define point(n) fixed<<setprecision(n)
typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;

void updateBIT(int arr[], int n, int index, int val){
	while(index<=n){
		arr[index] = arr[index] + val;
		index = index + index & (-index);
	}
}
int getSum(int arr[], int x){
	int sum = 0, index = x;
	while(index>0){
		sum+=arr[index];
		index = index & (index-1);
	}
	return sum;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int BIT[n+1];
    memset(BIT,0,sizeof(BIT));
    for(int i=0;i<n;i++){
    	updateBIT(BIT,n,i+1,arr[i]);
    }
    cout<<getSum(BIT,4)<<endl;
    cout<<getSum(BIT,3)<<endl;
    cout<<getSum(BIT,5)<<endl;
    return 0;
}