#include<stdio.h>
int fact(int x);
int main()
{
int i,j;
scanf("%d",&i);
j=fact(i);
printf("%d",j);
return 0;
}
int fact(int x)
{ static int p=1;
p=p*x;
if(x!=1)
    fact(--x);
else return p;
}
