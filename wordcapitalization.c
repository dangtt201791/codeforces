#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1002];
    fgets(s, 1002, stdin);
    s[strlen(s) - 1] = '\0';
    s[0] = toupper(s[0]);
    puts(s);
    return 0;
}