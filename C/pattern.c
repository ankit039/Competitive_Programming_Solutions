#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n= get_int("n: ");
   if(n<8)
    {
for(int i=0; i<n ;i++)
{
            for(int k=n; k>i;k=k-1)
       {
        printf(" ");
    }
    for(int j=0 ; j<=i; j++)
    {
printf("#");
    }
    printf("\n");
}
}
    else
        printf("not possible\n");
}
