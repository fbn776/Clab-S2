#include <stdio.h>

void main() {
    int matrix[30][30], m, n, i, j, transposed[30][30], isSymmetric = 1;
    printf("Enter m n: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix:\n");

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf(" %d", &matrix[i][j]);


    //Transposing a matrix;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
            /* Check for matrix inequality iff it's a square matrix
             * NOTE:
             * Its (j,i) because transposed[i][j] may or may not be defined at this point.
             * But we know transposed[j][i] is defined and both matrix[i][j] and matrix[j][i] is defined.
             * So we use (j,i)
            */
            if (n == m && (transposed[j][i] != matrix[j][i]))
                isSymmetric = 0;
        }
    }

    if (n != m)
        isSymmetric = 0;

    if (!isSymmetric) {
        printf("The matrix is not symmetric, the transposed matrix is:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++)
                printf("%d ", transposed[i][j]);
            printf("\n");
        }
    }else
        printf("The matrix is symmetric");
}