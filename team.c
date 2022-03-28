#include <stdio.h>
#include <malloc.h>

int countA(int *p)
{
    int i, count = 0;
    for (i=0; i<3; i++)
        if (*(p+i) == 1)
            count++;
    return count;
}

int countProblem(int *p, int n)
{
    int i, count = 0;
    for (i=0; i < 3*n; i+=3)
    {
        if (countA(p+i) >= 2)
            count ++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *p;
    p = (int *) malloc(sizeof(int)*3*n);
    int i;
    for (i=0; i<3*n; i+=3)
        scanf("%d%d%d", p+i, p+i+1, p+i+2);
    printf("%d", countProblem(p, n));
    free(p);
    return 0;
}