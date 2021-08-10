#include <stdio.h>

int length(int *local, int *localend)
{
    int x = 1;
    while (*local <= *(local + 1) && (local < localend))
    {
        x++;
        local++;
    }
    return x;
}

int maximum(int n, int a[])
{
    int max = 0, i;
    for (i=0; i<n; i++)
    {
        if (length(a + i, a + n - 1) > max)
            max = length(a + i, a + n - 1);
        if (max > (n - 1 - i))
            break;
    }
    return max;
}

int main()
{
    int a[100000], n;
    scanf("%d", &n);
    int i;
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("%d", maximum(n, a));
    return 0;
}