#include <bits/stdc++.h> 
using namespace std; 

template<typename T>
void qsfunc(vector<T> &array, int left, int right){
  if(left >= right) return;
  int p = array[left];

  int l = left, r = right;
  while(1){
    while(l < right and array[l] < p) l++;
    while(r > left and array[r] > p) r--;
    if(l >= r) break;
    swap(array[l], array[r]);
  }

  qsfunc(array, left, l-1);
  qsfunc(array, l+1, right);
}

template<typename T>
void quicksort(vector<T> &array){
  int n = array.size();
  qsfunc(array, 0, n-1);
}

int main() 
{ 
  srand((unsigned int)time(NULL));
  vector<int> arr;
  for(int i = 0; i < 10; i++) arr.emplace_back(rand()%1000);
  quicksort(arr);
  for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
	return 0; 
} 
