#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void help(char s[])
{
    int i, j;
    for (i=0; i<strlen(s); i+=2)
        for (j=i; j<strlen(s); j+=2)
            if (s[i] > s[j])
                swap(&s[i], &s[j]);
}

int main()
{
    char s[102];
    fgets(s, 102, stdin);
    s[strlen(s) - 1] = '\0';
    help(s);
    puts(s);
    return 0;
}