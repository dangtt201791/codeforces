#include <stdio.h>

int sumnth(int n)
{
    if (n==0)
        return 0;
    return n + sumnth(n-1);
}

int main()
{
    int k, n, w;
    scanf("%d%d%d", &k, &n, &w);
    long int moneybuy = k * sumnth(w);
    long int moneyborrow = moneybuy - n;
    if (moneyborrow <= 0)
        printf("0");
    else 
        printf("%ld", moneyborrow);
    return 0;
}