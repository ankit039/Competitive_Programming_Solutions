/*GIVEN A ARRAY : CONVERT IT INTO HEAP */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void heapify(vector<ll>& arr, int n, int i) 
{ 
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
  
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    if (largest != i) { 
        swap(arr[i], arr[largest]); 
        heapify(arr, n, largest); 
    } 
} 
  
void buildHeap(vector<ll>& arr, int n) 
{ 
    int startIdx = (n / 2) - 1; 
    for (int i = startIdx; i >= 0; i--) { 
        heapify(arr, n, i); 
    } 
} 

int main()
{
    vector<ll> arr = {10,20,15,12,40,25,18};
    for(auto i: arr)
    	cout<<i<<" ";
    cout<<endl;
    buildHeap(arr,arr.size());
    cout<<"\nAfter Heap process: \n";
    for(auto i: arr)
    	cout<<i<<" ";
    cout<<endl;
    return 0;
}