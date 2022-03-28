#include <stdio.h>
#include <string.h>

void rm(char s[], int p)
{
    int i;
    for (i=p; i<strlen(s); i++)
        s[i] = s[i+1];
}

void rmsichr(char s[])
{
    int i, j;
    for (i=0; i<strlen(s); i++)\
        for (j=i+1; j<strlen(s); j++)
        {
            while(s[i] == s[j])
                rm(s, j);
        }
}

int main()
{
    char s[105];
    fgets(s, 105, stdin);
    s[strlen(s) - 1] = '\0';
    rmsichr(s);
    int len = strlen(s);
    if (len%2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}