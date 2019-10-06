#include <bits/stdc++.h> 
using namespace std; 

template<typename T>
void msfunc(vector<T> &array, int left, int right){
  if(left >= right) return;

  int mid = (left + right) / 2;
  msfunc(array, left, mid);
  msfunc(array, mid+1, right);

  int x = left, y = mid+1;
  while(x <= mid and y <= right){
    if(array[x] <= array[y]){
      x++;
    }else{
      int v = array[y];
      int i = y;

      for(; i != x; i--){
        array[i] = array[i-1];
      }

      array[x] = v;
      x++;
      mid++;
      y++;
    }
  }
}

template<typename T>
void mergesort(vector<T> &array){
  int n = array.size();
  msfunc(array, 0, n-1);
}

int main() 
{ 
  srand((unsigned int)time(NULL));
  vector<int> arr;
  for(int i = 0; i < 10; i++) arr.emplace_back(rand()%1000);
  mergesort(arr);
  for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
	return 0; 
} 
