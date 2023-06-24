/*
ex no - 6
 29) Febin Nelson P, S2 CSE
*/

#include <stdio.h>
#include <math.h>

void main() {
    int N, i, j;
    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 2; i <= N; i++) {
        int isPrime = 1;
        for(j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    printf("\n");
}