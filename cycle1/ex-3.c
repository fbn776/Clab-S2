/*
Ex no - 3
29) Febin Nelson P, S2 CSE
*/
#include <stdio.h>
void main() {
    int a, b, prod;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    prod = a * b;
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    printf("GCD is %d\n", a);
    printf("LCM is %d\n", prod/a);
}
