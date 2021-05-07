#include <stdio.h>
#include <string.h>

void removei(char s[], int p)
{
    int i;
    for (i = p; i<strlen(s); i++)
        s[i] = s[i+1];
    // s[strlen(s) - 1] = '\0';
}

int main()
{
    int n;
    char s[52];
    scanf("%d", &n);
    getchar();
    fgets(s, 52, stdin);
    s[strlen(s) - 1] = '\0';
    int i;
    for (i=1; i<strlen(s); i++)
    {
        while (s[i] == s[i-1])
            removei(s, i);
    }
    printf("%d", n - strlen(s));
    return 0;
}