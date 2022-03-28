#include <stdio.h>

int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    i = 0;
    while (a <= b)
    {
        a = 3*a;
        b = 2*b;
        i++;
    }
    printf("%d", i);
    return 0;
}