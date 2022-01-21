#include<iostream>
//The reason why you don't see drastic changes is the code is same but you could've used {}braces to format which is a good practice and increases readability 
using namespace std;

int main(){
    int i,j;
    cout<<"i";
    cin>>i;
    cout<<"j";
    cin>>j;
    cout<<endl;
    while (j--)
    {
        int a,b;
        cout<<"a";
        cin>>a;
        cout<<"b";
        cin>>b;
        if (a<i||b<i)
        {
            cout<<"UPLOAD ANOTHER"<<endl;
        }
        if(a>i&&b>i||a>i&&b==i||a==i&&b>i){
            if (a!=b)
            {
                cout<<"CROP IT"<<endl;
            }else
            {
                cout<<"ACCEPTED"<<endl;
            }
        
            
        }
        if (a==i&&b==i)
        {
            cout<<"ACCEPTED"<<endl;
        }
        
        
    }
    
return 0;
}
