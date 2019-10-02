#include<stdio.h>
int main()
{
int n,i,c,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{c=a[i];
if(a[i]>=38)
{
for(j=0;j<n;j++)
{
if(a[i]%5==0)
break;
else a[i]++;
}
if(a[i]-c>=3)
printf("%d\n",c);
else printf("%d\n",a[i]);
}
else printf("%d\n",a[i]);
}    
return 0;
}
