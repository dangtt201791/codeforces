#include <stdio.h>
#include <malloc.h>

int countPar(int *p, int n, int k)
{
    if ((*(p + k -1) == 0) && (k > 0))
    {
        while ((*(p + k -1) == 0) && (k > 0))
            k--;
        return k;
    }
    else if ((*(p + k - 1) == *(p + k)) && (k < n))
    {
        while ((*(p + k - 1) == *(p + k)) && (k < n))
            k++;
        return k;
    }
    return k;
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int *p;
    p = (int *) malloc(sizeof(int) * n);
    int i;
    for (i=0; i<n; i++)
        scanf("%d", p + i);
    printf("%d", countPar(p, n, k));
    free(p);
    return 0;
}