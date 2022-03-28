#include <stdio.h>

void input(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
        scanf("%d", a + i);
    return;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void flip(int a[], int n)
{
    int i, j;
    for (i=0; i<n; i++)
        for(j=0; j<n-1; j++)
            if (a[j] > a[j+1])
                swap(&a[j], &a[j+1]);
}

void output(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[100], n;
    scanf("%d", &n);
    input(a, n);
    flip(a, n);
    output(a, n);
    return 0;
}