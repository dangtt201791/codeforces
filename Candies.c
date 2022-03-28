#include <stdio.h>
#include <math.h>

int findx(int n)
{
    int k = 1;
    double x;
    do
    {
        k++;
        x = n/(pow(2,k) - 1);
        if (x == (int)x)
            return (int)x;
        if (n/(pow(2,k) - 1) < 1)
            return 0;
    } while (1);
}

int main()
{
    int t, n[10000];
    scanf("%d", &t);
    int i;
    for (i=0; i<t; i++)
        scanf("%d", n + i);
    for(i=0; i<t; i++)
        printf("%d\n", findx(n[i]));
    return 0;
}