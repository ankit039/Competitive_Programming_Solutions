#include <bits/stdc++.h> 
using namespace std; 

template<typename T>
void insertionsort(vector<T> &array){
  int n = array.size();

	for(int i = 1; i < n; i++){
		for(int j = i; j > 0 and array[j-1] > array[j]; j--){
			swap(array[j-1], array[j]);
		}
	}
}

int main() 
{ 
  srand((unsigned int)time(NULL));
  vector<int> arr;
  for(int i = 0; i < 10; i++) arr.emplace_back(rand()%1000);
  insertionsort(arr);
  for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
	return 0; 
} 
