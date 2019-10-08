#include<iostream>
using namespace std;
int main(){
    int t,n,i;
    char s[100] = {0},r[100] = {0};
    int count1[2];
    cin>>t;
    while(t--){
      cin>>n;
      count1[0] = 0;
      count1[1] = 0;
      cin>>s;
      cin>>r;
    for(i=0;i<n;++i){
      //cin>>s[i];
      if(s[i] == '1')
        ++count1[0];
    }
    for(i=0;i<n;++i){
      //cin>>r[i];
      if(r[i] == '1')
        ++count1[1];
    }
    if(count1[0] == count1[1]){
     cout<<"YES"<<endl;
     //cout<<count1[0]<<endl;
   }
    else{
      cout<<"NO"<<endl;
    //  cout<<count1[0]<<endl;
    }
   }
  return 0;
}
