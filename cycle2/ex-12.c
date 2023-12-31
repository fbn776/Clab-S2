/*
 * Ex - 12
 * Given two sets (mathematical set) of numbers A and B. Find A union B, A intersection B, A - B.
 */
#include <stdio.h>
void main() {
    int A[30], B[30], Union[60], Intrs[30], Minus[30], m, n, i, j, unIndex, inIndex = 0, mIndex = 0, inA = 0;

    printf("Enter no of elements in A: ");
    scanf(" %d", &m);
    printf("Enter numbers in A: ");
    for (i = 0; i < m; i++) {
        scanf(" %d", &A[i]);
        Union[i] = A[i];
    }
    unIndex = i;

    printf("Enter no of elements in B: ");
    scanf(" %d", &n);
    printf("Enter numbers in B: ");
    for (i = 0; i < n; i++)
        scanf(" %d", &B[i]);

    //A union B;
    for(i=0; i<n; i++) {
        int hasElm = 0;
        for(j=0; j<m; j++)
            if(B[i] == A[j]) {
                hasElm = 1;
                break;
            }

        if(hasElm == 0)
            Union[unIndex++] = B[i];
    }

	//A intersection B
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(A[i] == B[j]) {
                Intrs[inIndex++] = A[i];
                break;
            }

	//A - B
	for(i=0; i<m; i++) {
		inA = 1;
		for(j=0; j<n; j++) {
			if(A[i] == B[j]) {
				inA = 0;
				break;
			}
		}
		if(inA == 1) {
			Minus[mIndex++] = A[i];
		}
	}

    printf("A union B is:\n");
    for(i=0; i<unIndex; i++)
        printf("%d ", Union[i]);
    printf("\n");

    printf("A intersection B is:\n");
    for(i=0; i<inIndex; i++)
        printf("%d ", Intrs[i]);
    printf("\n");

	printf("A - B is:\n");
	for(i=0; i<mIndex; i++)
		printf("%d ", Minus[i]);
	printf("\n");
}