#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, x, tempi, tempj;
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=5; j++)
        {
            scanf("%d", &x);
            if (x == 1)
            {
                tempi = i;
                tempj = j;
            }
        }
    }
    printf("%d", abs(tempi - 3) + abs(tempj - 3));
    return 0;
}