#include <stdio.h>
#include <stdlib.h>
int strend(const char *s, const char *t)
{   int l1, l2;
    l1=strlen(s);
    l2=strlen(t);
    if (l1>=l2)
    { s=s+(l1-l2);
      while (*s++==*t++)
      if (*s=='\0')
      return 1;
    }
return 0;
}
int main()
{   char s[100],t[100];
    gets(s);
    gets(t);
    printf("%d\n", strend(s, t));
    return 0;
}
