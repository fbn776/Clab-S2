/*
Ex - 13
List merge
29) Febin Nelson P, S2 CSE
*/
#include <stdio.h>

void main() {
    int m, n, s, A[30], B[30], C[60], i, j, k;

    printf("Enter size of A: ");
    scanf("%d", &m);
    printf("Enter numbers: ");
    for (i = 0; i < m; i++)
        scanf(" %d", &A[i]);

    printf("Enter size of B: ");
    scanf(" %d", &n);
    printf("Enter numbers: ");
    for (i = 0; i < n; i++)
        scanf(" %d", &B[i]);

    s = m + n;
    i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

    while (i < m)
        C[k++] = A[i++];

    while (j < n)
        C[k++] = B[j++];

    printf("Merged list is: ");
    for (i = 0; i < s; i++)
        printf("%d ", C[i]);

    printf("\n");
}