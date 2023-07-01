/*
Ex - 1
Roots of a quadratic equation.
*/
#include <stdio.h>
#include <math.h>

void main() {
    int a, b, c, desc;
    float root1, root2;
    printf("Enter a b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    desc = b*b - 4*a*c;
    if(desc > 0) {
        root1 = (-b + sqrt(desc))/(2.0*a);
        root2 = (-b - sqrt(desc))/(2.0*a);
        printf("The roots are real and unique\n");
        printf("x1 = %.2f\nx2 = %.2f\n", root1, root2);
    }else if(desc == 0) {
        root1 = -b / (2.0*a);
        printf("The roots are real and equal\n");
        printf("x = %.2f", root1);
    }else {
        float rp = -b / (2.0*a);
        float ip = sqrt(-desc) / (2.0*a);
        printf("The roots are imaginary\n");
        printf("x1 = %0.2f + %0.2fi\n", rp, ip);
        printf("x2 = %0.2f - %0.2fi\n", rp, ip);
    }
}