#include <stdio.h>

void readMatrix(int arr[][30], int m, int n) {
	int i, j;
	printf("Enter numbers:\n");
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf(" %d", &arr[i][j]);
}

int multMatrix(int A[][30], int m, int n, int B[][30], int p, int q, int C[][30]) {
	if(n != p)
		return 0;
	int i, j, k;
	for(i=0; i<m; i++)
		for(j=0; j<q; j++) {
			C[i][j] = 0;
			for(k=0; k<n; k++)
				C[i][j] += A[i][k] * B[k][j];
		}
	return 1;
}

void displayMatrix(int A[][30], int n, int m) {
	int i, j;
	for(i=0; i<m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}


//Hello there
void main() {
	int A[30][30], n, m, B[30][30], p, q, C[30][30];

	printf("Matrix 1\nEnter m n: ");
	scanf("%d %d", &m, &n);
	readMatrix(A, m, n);

	printf("Matrix 2\nEnter p q: ");
	scanf(" %d %d", &p, &q);
	readMatrix(B, p, q);


	if(multMatrix(A, m, n, B, p, q, C)) {
		printf("Multiplied matrix is:\n");
		displayMatrix(C, m, q);
	}else {
		printf("Invalid matrices\n");
	}

}