#include<stdio.h>
int main()
{
    int a[3],b[3],al=0,bo=0,i;
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(i=0;i<3;i++)
    scanf("%d",&b[i]);
    for(i=0;i<3;i++)
   { if(a[i]>b[i])
    al=al+1;
    if(a[i]<b[i])
    bo=bo+1;
    if(a[i]=b[i])
    continue;
   }
   printf("%d\t%d",al,bo);
   return 0;
}
