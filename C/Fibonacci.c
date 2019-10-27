#include <stdio.h>

void fibonacci(long long int n)
{
    long long int a = 1, b = 1, v, i;
    if (n == 1) {
        printf("1");
    } else {
        printf("1 1");
    } 
    for (i = 3; i <= n; i++) {
        v = a + b;
        printf(" %lld", v);
        a = b;
        b = v;
    }
    printf("\n");
} 

int main()
{
  long long int n;
  scanf("%lld", &n);

  fibonacci(n);

  return 0;
}
