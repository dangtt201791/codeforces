#include <stdio.h>

int main()
{
    int x, i = 0, s = 0;
    scanf("%d", &x);
    while (s < x)
    {
        s += 5;
        i++;
    }
    printf("%d", i);
    return 0;
}