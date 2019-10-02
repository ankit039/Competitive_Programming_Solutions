#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N,r;
	cin>>N>>r;
	while(N--)
	{
	    int R;
	    cin>>R;
	    if(R>=r)
	    {
	        cout<<"Good boi"<<endl;
	    }
	    else
	    {
	        cout<<"Bad boi"<<endl;
	    }
	}
	
	return 0;
}


