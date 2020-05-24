#include<stdio.h>
#include<string.h>
int main()
{
int i,j=0;
char a[100];
gets (a);
for(i=0;a[i]!='\0';i++)
{ j++;
}
printf("%d",j);
return 0;
}
