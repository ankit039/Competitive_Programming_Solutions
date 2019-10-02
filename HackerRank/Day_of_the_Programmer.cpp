#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    if(y==1918)
    {
        cout<<"26"<<"."<<"09."<<y;
    }
    else if(y<1918)
    {
        if(y%4==0)
            {
                cout<<12<<"."<<"09."<<y;
            }
        else cout<<13<<"."<<"09."<<y;
    }
    else
    {
        if(y%4==0)
        {
            if(y%100==0)
                {
                    if(y%400==0)
                        cout<<12<<"."<<"09."<<y;
                        else cout<<13<<"."<<"09."<<y;
                }
            else cout<<12<<"."<<"09."<<y;
        }
        else cout<<13<<"."<<"09."<<y;
    }
    return 0;
}
