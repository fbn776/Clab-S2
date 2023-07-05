/*
Ex - 9
Binary to decimal
*/
#include <stdio.h>
void main() {
    int dec, i = 0, j, bin[20];

    printf("Enter decimal number: ");
    scanf("%d", &dec);

    while(dec != 0) {
        bin[i++] = dec % 2;
        dec /= 2;
    }

    for(j=i-1; j>=0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
}