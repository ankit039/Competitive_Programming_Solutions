#include<iostream>
using namespace std;

int main() {

  int n;
  cin>>n;

  int p =0;
  int c = 0;
  for(int i = 0; i < n; i++) {
    int x;
    cin>>x;

    if(x < 0) {
      if (p > 0) {
        p--;
      } else {
        c++;
      }
    } else {
      p+=x;
    }

  }

  cout<<c;

}
