#include<stdio.h>
int main()
{
    int *a,*b,first,second,sum,diff;
  scanf("%d%d",&first,&second);
  a=&first;
  b=&second;
  sum=*a+*b;
  if(first<second)
  diff=*b-*a;
  else diff=*a-*b;
  printf("%d\n%d",sum,diff);
  return 0;
}
