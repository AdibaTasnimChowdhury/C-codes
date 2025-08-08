#include <stdio.h>
int main()
{
    int T, X, Y;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        scanf("%d %d", &X, &Y);
        if ((2*Y)<=15*X){printf("yes\n");}
        else {printf("no\n");}

    }
    return 0;
}
