#include <bits/stdc++.h> 
using namespace std; 

template<typename T>
void down(vector<T> &array, int i, int n){
  int c = 2*i+1;
  while(c <= n){
    if((c < n) && (array[c] < array[c+1])) c++;
    if(array[c] <= array[i]) break;

    swap(array[c], array[i]);
    i = c;
    c = 2*i+1;
  }
}

template<typename T>
void heapsort(vector<T> &array){
  int n = array.size();
  
  for(int i = n/2; i >= 0; i--){
    down(array, i, n-1);
  }

  for(int i = n-1; i >= 1; i--){
    swap(array[0], array[i]);
    down(array, 0, i-1);
  }
}

int main() 
{ 
  srand((unsigned int)time(NULL));
  vector<int> arr;
  for(int i = 0; i < 10; i++) arr.emplace_back(rand()%1000);
  heapsort(arr);
  for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
	return 0; 
} 
