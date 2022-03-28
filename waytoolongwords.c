#include <stdio.h>
#include <malloc.h>
#include <string.h>

void words(char *p)
{
    if(strlen(p) <= 10)
        puts(p);
    else 
        printf("%c%d%c\n", *p, strlen(p)-2, *(p+strlen(p)-1));
}

int main()
{
    int n;
    char *p[101];
    int i;
    scanf("%d", &n);
    getchar();
    for (i = 0; i<n; i++)
    {
        p[i] = (char *) malloc(sizeof(char) * 102);
        fgets(p[i], 102, stdin);
        *(p[i] + strlen(p[i]) - 1) = '\0';
    }
    for(i=0; i<n; i++)
    {
            words(p[i]);
            free(p[i]);
    }
    return 0;
}