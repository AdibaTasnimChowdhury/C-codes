#include <stdio.h>

int main()
{
    int T, N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);

        int isPrime = 1;

        for (int i = 2; i <= N / 2; i++) {
            if (N % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(N==1) {printf("no\n");}

      else if (isPrime==1) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }

    return 0;
}

