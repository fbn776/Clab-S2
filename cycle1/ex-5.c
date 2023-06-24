/*
ex no - 5
 29) Febin Nelson P, S2 CSE
*/

#include <stdio.h>
#include <math.h>

void main() {
    int bin, decimal = 0, i = 0;
    printf("Enter binary number: ");
    scanf("%d", &bin);

    while(bin > 0) {
        int digit = bin % 10;
        if(!(digit == 1 || digit == 0)) {
            printf("Invalid binary number.\nEnter again: ");
            scanf(" %d", &bin);
            decimal  = i = 0;
            continue;
        }
        decimal += digit * pow(2, i);
        bin /= 10;
        i++;
    }
    printf("Decimal is %d", decimal);
}