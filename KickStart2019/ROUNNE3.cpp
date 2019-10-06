// Google Kickstart : Round E
// Problem 3 : Street Checkers
// By mohit maroliya


#include<bits/stdc++.h>
using namespace std;
#define next cout<<endl;

int main()
{
  int t;
  cin>>t;
  for(int k=0;k<t;k++)
  {
    int l,r,ans=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
      int alice=0,bob=0;
      for (int j=1; j<=sqrt(i); j++) 
      { 
          if (i%j == 0) 
          { 
              
              if (i/j == j) 
                  {
                    (j%2 == 0) ? bob++ : alice++ ;
                  }
    
              else 
                  {
                    (j%2 == 0) ? bob++ : alice++ ;
                    ((i/j)%2 == 0) ? bob++ : alice++ ;
                  }

          } 
      }
      //cout<<"for no: "<<i<<" alice: "<<alice<<" bob: "<<bob<<endl;
      if(abs(alice-bob)<=2)
        ans++;
    }
    cout<<"Case #"<<k+1<<": "<<ans<<'\n';
  }
  return 0;
}
