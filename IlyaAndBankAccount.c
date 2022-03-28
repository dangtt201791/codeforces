#include <stdio.h>

int min(int n)
{
    n = -n;
    int th1, th2;
    th1 = n/10;
    th2 = (n/100)*10 + n%10;
    if (th1 < th2) 
        return -th1;
    return -th2;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 0)
        printf("%d", n);
    else
        printf("%d", min(n));
    return 0;
}