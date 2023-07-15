/*
 * Ex - 27
 * Polynomial addition
*/
#include <stdio.h>

void inputInt(char prompt[100], int *to) {
	printf("%s", prompt);
	scanf(" %d", to);
}

typedef struct {
	int degree;
	float terms[10];
} Polynomial;

int main() {
	int i, diff, t1, t2;
	Polynomial ply1, ply2, result;

	inputInt("Enter degree of polynomial 1: ", &ply1.degree);
	printf("Enter terms: ");
	for (i = 0; i <= ply1.degree; i++)
		scanf(" %f", &ply1.terms[i]);

	inputInt("Enter degree of polynomial 2: ", &ply2.degree);
	printf("Enter terms: ");
	for (i = 0; i <= ply2.degree; i++)
		scanf(" %f", &ply2.terms[i]);

	result = ply1.degree > ply2.degree ? ply1 : ply2;
	diff = ply1.degree - ply2.degree;
	diff = diff < 0 ? -diff : diff;

	for (i = diff; i <= result.degree; i++) {
		t1 = t2 = i;
		if (ply1.degree == result.degree) {
			t1 = i;
			t2 = i - diff;
		} else {
			t1 = i - diff;
			t2 = i;
		}
		result.terms[i] = ply1.terms[t1] + ply2.terms[t2];
	}

	for (i = 0; i <= result.degree; i++) {
		printf("%.2fx^%d", result.terms[i], result.degree - i);
		if (i != result.degree)
			printf(" + ");
	}
	printf("\n");
}