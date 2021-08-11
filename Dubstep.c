#include <stdio.h>
#include <string.h>

void rm(char s[], int vt)
{
    int i;
    for(i=vt; i<strlen(s); i++)
        s[i] = s[i+1];
    return;
}

void change(char s[])
{
    char *flag = strstr(s, "WUB");
    while(flag != NULL)
    {
        rm(s, flag - s);
        rm(s, flag - s);
        s[flag - s] = ' ';
        flag = strstr(s, "WUB");
    }
}

void comebk(char s[])
{
    while (s[0] == ' ')
        rm(s, 0);
    while (s[strlen(s) - 1] == ' ')
        rm(s, strlen(s) - 1);
    int i;
    for (i=0; i<strlen(s); i++)
        while(s[i] == ' ' && s[i+1] == ' ')
            rm(s, i+1);
}

int main()
{
    char songname[202];
    fgets(songname, 202, stdin);
    songname[strlen(songname) - 1] = '\0';
    change(songname);
    comebk(songname);
    puts(songname);
    return 0;
}