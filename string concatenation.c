#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001];
    char T[1001];
    char combine [2003];

    scanf("%s", &S);
    scanf("%s", &T);
    int lenS=strlen(S);
    int lenT=strlen(T);
    printf("%d %d\n", lenS, lenT);

    strcpy(combine, S);
    strcat(combine, " ");
    strcat(combine, T);

    printf("%s", combine);
    return 0;
}
