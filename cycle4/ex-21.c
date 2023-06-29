#include <stdio.h>

long int fact(int n) {
    if (n <= 0)
        return 1;
    return n * fact(n - 1);
}

void main() {
    int n, r;
    printf("Enter n r: ");
    scanf("%d %d", &n, &r);
    printf("%dC%d = %d", n, r, fact(n)/(fact(r) * fact(n-r)));
}