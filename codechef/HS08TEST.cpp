#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int X;
	float Y;
	cin>>X>>Y;
	if(Y>=X+0.5 && X%5==0)
	{
	    Y=Y-X-0.5;
	    cout<<Y<<endl;
	}
	else
	{
	    cout<<Y<<endl;
	}
	return 0;
}
