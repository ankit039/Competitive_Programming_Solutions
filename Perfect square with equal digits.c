#include<stdio.h>
#include<math.h>
int main()
{
int i,s;
for(i=1000;i<10000;i++)
{
if(i%10==(i/10)%10&&(i/100)%10==(i/1000)%10)
{
s=sqrt(i);
if((s*s)==i)
printf("%d\n",i);
}
}getch();
return 0;
}


