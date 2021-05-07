#include <stdio.h>

int main()
{
    int X = 0;
    int n;
    scanf("%d", &n);
    getchar();
    char kt;
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%*c%c%*c", &kt);
        getchar();
        if (kt == '+')
            X++;
        else if (kt == '-')
            X--;
    }
    printf("%d", X);
    return 0;
}