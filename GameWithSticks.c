#include <stdio.h>

int countturns(int n, int m)
{
    int i = 0;
    while (m != 0 && n != 0)
    {
        i++;
        m--;
        n--;
    }
    return i;
}

int main()
{
    int m, n;
    scanf("%d%d", &n, &m);
    if (countturns(n, m) % 2 == 0)
        printf("Malvika");
    else
        printf("Akshat");
    return 0;
}