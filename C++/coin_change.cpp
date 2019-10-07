#include <iostream>
#include <algorithm>
using namespace std;
int result(int arr[],int n,int res)
{
    if(res==0)
    {
        return 1;
    }
    if(res<0)
    {
        return 0;
    }
    if(res>=0 && n<=0)
    {
        return 0;
    }
    return result(arr,n-1,res) + result(arr,n,res-arr[n-1]);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res;
    cin>>res;
    cout<<result(arr,n,res);
    return 0;
}
