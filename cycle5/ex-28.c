/*
 * Ex - 28
 * Program to find the sum and product of two complex numbers represented using struct.
*/
#include <stdio.h>

struct ComplexNum {
	float real;
	float imaginary;
};

struct ComplexNum addComplex(struct ComplexNum a, struct ComplexNum b) {
	struct ComplexNum result = {a.real + b.real, a.imaginary + b.imaginary};
	return result;
}

struct ComplexNum subComplex(struct ComplexNum a, struct ComplexNum b) {
	struct ComplexNum result = {a.real - b.real, a.imaginary - b.imaginary};
	return result;
}

struct ComplexNum prodComplex(struct ComplexNum a, struct ComplexNum b) {
	struct ComplexNum result = {(a.real * b.real) - (a.imaginary * b.imaginary),
								(a.real * b.imaginary) + (a.imaginary * b.real)};
	return result;
}

void displayComplex(struct ComplexNum num) {
	printf("%.2f %c %.2fi\n", num.real, num.imaginary > 0 ? '+' : '-',
		   num.imaginary > 0 ? num.imaginary : -num.imaginary);
}

int main() {
	struct ComplexNum a, b, sum, diff, prod;

	printf("Enter complex number 1 (a b): ");
	scanf("%f %f", &a.real, &a.imaginary);

	printf("Enter complex number 2 (c d): ");
	scanf("%f %f", &b.real, &b.imaginary);

	sum = addComplex(a, b);
	diff = subComplex(a, b);
	prod = prodComplex(a, b);

	printf("Sum: ");
	displayComplex(sum);

	printf("Difference: ");
	displayComplex(diff);

	printf("Product: ");
	displayComplex(prod);


	return 0;
}
