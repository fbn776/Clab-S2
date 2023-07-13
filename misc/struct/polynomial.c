/*
 * Program to find the sum of two polynomials of m and n degrees.
 * Sample output;
Enter degree of polynomial 1: 3
Enter terms: 1 4 5
Enter degree of polynomial 2: 2
Enter terms: 2 3
1.00x^3 + 4.00x^2 + 5.00x^1
2.00x^2 + 3.00x^1
------------------------------
1.00x^3 + 6.00x^2 + 8.00x^1
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

void displayPolynomial(Polynomial ply) {
	int i;
	float t;
	for (i = 0; i < ply.degree; i++) {
		char sign[3] = " + ";
		t = ply.terms[i];
		if (i == 0)
			sign[0] = sign[1] = sign[2] = '\0';

		if (i > 0 && t < 0) {
			t = -t;
			sign[1] = '-';
		}
		printf("%s%.2fx^%d", sign, t, ply.degree - i);
	}
	printf("\n");
}

int abs(int x) {
	return x < 0 ? -x : x;
}

void line(int num) {
	int i;
	for(i=0; i<num; i++) {
		printf("-");
	}
	printf("\n");
}

int main() {
	int i, diff, t1, t2;
	Polynomial ply1, ply2, result;

	inputInt("Enter degree of polynomial 1: ", &ply1.degree);
	printf("Enter terms: ");
	for (i = 0; i < ply1.degree; i++)
		scanf(" %f", &ply1.terms[i]);

	inputInt("Enter degree of polynomial 2: ", &ply2.degree);
	printf("Enter terms: ");
	for (i = 0; i < ply2.degree; i++)
		scanf(" %f", &ply2.terms[i]);


	result = ply1.degree > ply2.degree ? ply1 : ply2;
	diff = abs(ply1.degree - ply2.degree);

	for (i = diff; i < result.degree; i++) {
		t1 = t2 = i;
		if(ply1.degree == result.degree) {
			t1 = i;
			t2 = i - diff;
		}else {
			t1 = i - diff;
			t2 = i;
		}
		result.terms[i] = ply1.terms[t1] + ply2.terms[t2];
	}

	displayPolynomial(ply1);
	displayPolynomial(ply2);
	line(30);
	displayPolynomial(result);
	return 0;
}