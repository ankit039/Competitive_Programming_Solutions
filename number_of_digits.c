#include<stdio.h>
int main()
{
int i,j,r=0;
scanf("%d",&i);
while(i!=0)
{r++;
i=i/10;
}
printf("%d",r);
return 0;
}
