#include<iostream>
using namespace std;
int main()
{
    int L;
    cin>>L;
    int N;
    cin>>N;
    while(N--)
    {
        int W,H;
        cin>>W>>H;
        if(W<L||H<L)
        cout<<"UPLOAD ANOTHER"<<endl;
        if(W>L&&H>L||W>L&&H==L||W==L&&H>L)
       { if(W!=H)
           cout<<"CROP IT"<<endl;
        else
        cout<<"ACCEPTED"<<endl;
       }
        if(W==L&&H==L)
        cout<<"ACCEPTED"<<endl;
    }
    return 0;
}
