/*
ex no - 7
First N prime numbers
*/
#include <stdio.h>
void main() {
	int N, i, j;
	printf("Enter N: ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		int sum = 0;
		for (j = 1; j < i; j++)
			if (i % j == 0)
				sum += j;

		if (sum == i)
			printf("%d ", i);
	}
	printf("\n");
}
