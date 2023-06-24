/*
ex no - 6
 29) Febin Nelson P, S2 CSE
*/

#include <stdio.h>
#include <math.h>

void main() {
    int N, count = 0, i = 2, j, root;
    printf("Enter N: ");
    scanf("%d", &N);

    while (count < N) {
        int isPrime = 1;
        root = sqrt(i);
        for (j = 2; j <= root; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
            count++;
        }
        i++;
    }

    printf("\n");
}