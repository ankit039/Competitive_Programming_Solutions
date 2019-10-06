#include<stdio.h>
int main()
{
int i,j,T,N,max;
scanf("%d",&T);
for(i=0;i<T;i++)
{
    scanf("%d",&N);
    int arr[N],brr[N],res[N];
    for(j=0;j<N;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<N;j++)
    {
      scanf("%d",&brr[j]);
    }
    for(j=0;j<N;j++)
    {
        res[j]=20*arr[j]-10*brr[j];
        if(res[j]<0)
        {
         res[j]=0;
        }
    }
    max=res[0];
    for(j=1;j<N;j++)
    {
        if(res[j]>max)
        {
            max=res[j];
        }
    }
    printf("%d\n",max);
}
return (0);
}
