#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int root = sqrt(n), i;
    for (i = 2; i <= root; i++)
        if (n % i == 0)
            return 0;
    return n == 1 ? 0 : 1;
}

void main() {
    int matrix[30][30], m, n, i, j;
    printf("Enter m n: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix:\n");

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf(" %d", &matrix[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (isPrime(matrix[i][j]))
                printf("%d at (%d, %d) is prime\n", matrix[i][j], i + 1, j + 1);
}