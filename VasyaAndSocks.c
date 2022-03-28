#include <stdio.h>

int day(int n, int m)
{
   int i = 0;
   while (n > 0)
   {
       n--;
       i++;
       if (i%m == 0)
            n++;
   }
   return i;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", day(n, m));
    return 0;
}