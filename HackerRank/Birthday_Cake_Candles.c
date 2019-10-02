#include<stdio.h>
int main()
{
    long long int n,i,j,c=0,l;
    scanf("%lld",&n);
    int a[n],temp;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    l=a[0];
    for(i=1;i<n;i++)
    {if(a[i]>=l)
    l=a[i];
    }
    for(i=0;i<n;i++)
    {if(a[i]==l)
    c++;
    }
    printf("%lld",c);
    return 0;
}
