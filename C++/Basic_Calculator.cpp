// A Program of Basic Calculator

#include<iostream>

using namespace std;

int main()
{
	int choice;
	int n,i,sum=0,sub=0,mul=1;
	float div;
	
	cout<<"Enter the total numbers to be calculated:";
	cin>>n;
	cout<<endl;
	cout<<"Enter "<<n<<" numbers:";
	for(i=0;i<=n;i++)
	{
		cin>>i;
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"Enter the operation number from the following:"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1 :
			for(i=0;i<=n;i++)
			{
				sum+=i;
			}
			cout<<sum<<endl;
			break;
			
		case 2 :
			for(i=0;i<=n;i++)
			{
				// sub=i;
				sub=sub-i;	
			}		
			cout<<sub<<endl;
			break;
			
		default :
			cout<<"Error!! Operation Number is Invalid.";
			break;
	}
	return 0;
}
