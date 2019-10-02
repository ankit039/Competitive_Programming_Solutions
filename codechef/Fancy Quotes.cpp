//https://www.codechef.com/JAN19B/problems/FANCY/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	char s[10]={0};
	cin>>t;
	s[0]='n';
	s[1]='o';
	s[2]='t';
	while(t--)
	{
	  char a[110];
	  int b=0,i,j=0,flag=0;
	  scanf(" %[^\t\n]s",&a);
        
	  for(i=0;i<strlen(a);i++)
	    {
	  	if(a[i]==s[j])
	  	 {  ++j;
	  	 	if(j==3)
	  	 	{
	  	 		if(a[i+1]==' ')
	  	 		{  
	  	 			if(a[i-3]==' ')
	  	 			{
	  	 			flag=1;
	  	 	
	  	 		    break;
	  	 			}
	  	 		}
	  	 		if(i==2)
	  	 		{
	  	 			if(a[i+1]==' ')
	  	 			{
	  	 				flag=1;
	  	 				break;
	  	 			}
	  	 		}
	  	 		if(a[i-3]==' ')
	  	 		{
	  	 			if(a[i+1]=='\0')
	  	 			{
	  	 				flag=1;
	  	 				break; 
	  	 			}
	  	 		}
	  	 			
	  	 		if(i==2)
	  	 		{
	  	 			if(a[i+1]=='\0')
	  	 			{
	  	 				flag=1;
	  	 				break; 
	  	 			}
	  	 		}
	  	 	}
	  	 	
	  	 }
	  	 else
	  	 j=0;
	  
	  	}
	 if(flag==1)
	    cout<<"Real Fancy\n";
	  else
	 cout<<"regularly fancy\n";
	}
return 0;
}
