#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 10

int a[size],top= -1;

void push(int val)
{
	if (top== size-1)
	{
		printf("stack overflow");
		
	}
	else
	{
		top++;
		a[top]=val;
		printf("Push Successful");
	}
}

void pop()
{
	if(top==-1)
	{
		printf("stack empty");
	}
	
	else {
		printf("Deleted element is %d",a[top]);
		top--;
	}
}

void display()
{
	int i;
	printf("Current stack\n");
	for( i=top;i>=0;--i)
	{
		printf("%d\n",a[i]);
	}
}

void main()
{
	int input,val;
	while (input!=4)
	{
		printf(" \n What operations you want to do ? \n 1.Push\n 2.Pop\n 3.Display\n 4.exit ");
		scanf("%d",&input);
		
		switch(input)
		{
			case 1:
				printf("Enter element to be pushed :");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
			    pop();
				break;
			case 3:
			   display();
			   break;
		    case 4:
		    	exit(0);
			   
			default:
			printf("Invalid output");
			   		
		}
		
	   //	printf("\n Do you want to do any other operations?\n 1.yes \n 2.no ");
	/*	int p;
		scanf("%d",&p);
		if (p==1)
		{
		clrscr();
     	} 
		if(p==2)
		{
		break;
	    } */
	}
}
