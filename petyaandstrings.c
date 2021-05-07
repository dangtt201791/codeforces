#include <stdio.h>
#include <string.h>

int main()
{
    char A[102], B[102];
    fgets(A, 102, stdin);
    A[strlen(A) - 1] = '\0';
    fgets(B, 102, stdin);
    B[strlen(B) - 1] = '\0';
    int flag = stricmp(A, B);
    if (flag == 0)
        printf("0");
    else if (flag > 0)
        printf("1");
    else 
        printf("-1");
    return 0;
}