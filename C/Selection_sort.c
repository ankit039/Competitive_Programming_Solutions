// C Program to arrange the array using selection sort

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,min=0,temp=0;
	printf("Enter the length of an array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the values: ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<(n-1);i++)
	{
		min=i;
		for(j=(i+1);j<n;j++)
		{
			if(arr[min]>arr[j])
			min=j;
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	printf("The arranged array is: ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
