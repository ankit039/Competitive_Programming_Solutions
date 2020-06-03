#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    static int h=0;
    for(int j=0;j<n-1;j++)
    {
        for(int g=j+1;g<n;g++)
        {
            if((a[j]+a[g])%k==0)
            h++;
        }
    }
    printf("%d",h);
    return 0;
}
