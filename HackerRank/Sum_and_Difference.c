#include <stdio.h>
int main()
{
    int a,b;float x,y;
    scanf("%d%d%f%f",&a,&b,&x,&y);
    printf("%d %d\n",a+b,a-b);
    printf("%1.1f %1.1f",x+y,x-y);
    return 0;

}
