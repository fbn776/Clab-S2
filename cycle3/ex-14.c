#include <stdio.h>

void main() {
    int matrix[30][30], m, n, i, j, min, index[2] = {1, 1};
    printf("Enter m n: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix:\n");

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf(" %d", &matrix[i][j]);

    min = matrix[0][0];
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(matrix[i][j] < min) {
                min = matrix[i][j];
                index[0] = i + 1;
                index[1] = j + 1;
            }

    printf("Smallest is %d at (%d,%d)\n", min, index[0], index[1]);
}