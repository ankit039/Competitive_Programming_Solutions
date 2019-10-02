#include<stdio.h>
int main()
{
    float a,b,r,p,q;
    printf("\nPlease enter the length and breadth respectivily of a rectangle:\n");
    scanf("%f%f",&a,&b);
    p=a*b;
    printf("\nThe area of the rectangle is:%f\n",p);
    printf("\nNow, enter the value of radius of a circle:\n");
    scanf("%f",&r);
    q=3.14159*r*r;
    printf("\nThe area of a circle is %f\n",q);
    return 0;
}
