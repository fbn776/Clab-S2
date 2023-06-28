#include <stdio.h>

void main() {
    int matrix[30][30], m, n, i, j, rowSum = 0, colSum = 0, boundSum = 0;
    printf("Enter m n: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix:\n");

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf(" %d", &matrix[i][j]);

    for (i = 0; i < m; i++) {
        rowSum = 0;
        for (j = 0; j < n; j++) {
            rowSum += matrix[i][j];
            if(i == 0 || j == 0 || i == m - 1 || j == n - 1)
                boundSum += matrix[i][j];
        }
        printf("Sum of %d-th row is %d\n", i + 1, rowSum);
    }

    for(j=0; j<n; j++) {
        colSum = 0;
        for (i = 0; i < m; i++)
            colSum += matrix[i][j];
        printf("Sum of %d-th column is %d\n", j + 1, colSum);
    }

    printf("Boundary sum is %d\n", boundSum);
}