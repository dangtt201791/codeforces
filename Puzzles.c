#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int n)
{
    int i, j;
    for (i=0; i<n-1; i++)
        for (j=i+1; j<n; j++)
            if (a[i] > a[j])
                swap(&a[i], &a[j]);
    return;
}

int mindis(int a[], int n, int m)
{
    sort(a, m);
    int dis, min = a[m-1] - a[0];
    int i;
    for (i=0; i<=m-n; i++)
    {
        dis = a[i+n-1] - a[i];
        if (dis < min)
            min = dis;
    }
    return min;
}

int main()
{
    int n, m, f[50];
    scanf("%d%d", &n, &m);
    int i;
    for (i=0; i<m; i++)
        scanf("%d", f + i);
    printf("%d", mindis(f, n, m));
    return 0;
}