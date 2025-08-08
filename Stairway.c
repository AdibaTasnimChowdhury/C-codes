#include <stdio.h>

int main()
{
    long long S, N, X;
    scanf("%lld %lld %lld", &S, &X, &N);

    long long div = S / N;
    if (S%N!=0){div++;}

    if (div <= X)
        printf("%lld\n", div);
    else
        printf("Rip you Po!\n");

    return 0;
}


