#include <stdio.h>

long long kth(long long n, long long k)
{
    long long odds = (n%2 == 0)?n/2:(n/2 + 1);
    if (k <= odds)
        return 2*k - 1;
    return (k-odds)*2 ;

}

int main()
{
    long long n, k;
    scanf("%lld%lld", &n, &k);
    printf("%lld", kth(n, k));
    return 0;
}