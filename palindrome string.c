#include <stdio.h>
#include <string.h>
int main()
{
    char S[1001];
    scanf("%s", S);
    int lenS=strlen(S);
    int ispali = 1;

    for(int i=0; i<lenS/2; i++)
        {if (S[i]==S[lenS-1-i]){ispali=1;}
        else {ispali=0;}
        }
        if (ispali==1) {printf ("yes\n");}
        else {printf ("no\n");}
        return 0;
}



