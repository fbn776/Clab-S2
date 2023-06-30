#include <stdio.h>

int largestOf(int arr[], int n) {
	int max = arr[0], i;
	for(i=1; i<n; i++)
		if(arr[i] > max)
			max = arr[i];
	return max;
}

void main() {
	int A[30][30], m, n, i, j;
	printf("Enter m n: ");
	scanf("%d %d", &m, &n);
	printf("Enter numbers:\n");
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf(" %d", &A[i][j]);

	for(i=0; i<m; i++)
		printf("Largest of row %d = %d\n", i+1, largestOf(A[i], m));

	printf("\n");
}