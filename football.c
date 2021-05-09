#include <stdio.h>
#include <string.h>

int main()
{
    char pos[102];
    fgets(pos, 102, stdin);
    pos[strlen(pos) - 1] = '\0';
    int i, flag = 0, count = 1;
    for (i = 1; i < strlen(pos); i++)
    {
        if(pos[i] == pos[i-1])
            count++;
        else
            count = 1;
        if (count == 7)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("YES");
    else 
        printf("NO");
    return 0;
}