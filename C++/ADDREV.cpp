#include<iostream>
using namespace std;

int rev(int number){
   int res = 0;
   while (number > 0){
      res = res * 10 + number%10;
      number /= 10;
   }
   return res;
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int n1, n2;
        cin >> n1 >> n2;
        cout << rev(rev(n1)+rev(n2))<< endl;
    }
    return 0;
}