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
            if (a[i] < a[j])
                swap(&a[i], &a[j]);
}

int sumarray(int a[], int n)
{
    int i, sum = 0;
    for (i=0; i<n; i++)
        sum += a[i];
    return sum;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    int i;
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    int summoney = sumarray(a, n);
    int money = 0;
    int coin = 0;
    for (i=0; i<n; i++)
    {
        money += a[i];
        if (money > (summoney - money))
        {
            coin = i + 1;
            break;
        }
    }
    printf("%d", coin);
    return 0;
}