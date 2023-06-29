#include <stdio.h>
#include <math.h>

long int fact(int n) {
    if (n <= 0)
        return 1;
    return n * fact(n - 1);
}

float degToRad(float deg) {
    return deg * M_PI / 180.0;
}

float sine(float deg) {
    int i;
    float sum, rad = degToRad(deg);
    sum = rad;
    for (i = 1; i <= 10; i++)
        sum += ((i % 2 == 0)?1:-1) * pow(rad, (2 * i) + 1) / fact((2 * i) + 1);

    return sum;
}

float cosine(float deg) {
    int i;
    float sum, rad = degToRad(deg);
    sum = 1;
    for (i = 1; i <= 10; i++)
        sum += ((i % 2 == 0)?1:-1) * pow(rad, 2 * i) / fact(2 * i);

    return sum;
}

void main() {
    float s, c, deg;
    printf("Enter angle: ");
    scanf("%f", &deg);

    s = sine(deg);
    c = cosine(deg);
    printf("sine(%f) = %f\n", deg, s);
    printf("cosine(%f) = %f\n", deg, c);
    printf("Using library functions:\n");
    printf("sine(%f) = %f\n", deg, sin(degToRad(deg)));
    printf("cosine(%f) = %f\n", deg, cos(degToRad(deg)));
}