/*
Ex no - 4
29) Febin Nelson P, S2 CSE
*/

#include <stdio.h>
void main() {
    int N, largest, smallest, i = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter numbers: ");
    scanf(" %d ", &largest);
    smallest = largest;
    while(i < N-1) {
        int num;
        scanf(" %d", &num);
        if(num > largest)
            largest = num;
        else if(num < smallest)
            smallest = num;

        i++;
    }

    printf("Largest is %d\n", largest);
    printf("Smallest is %d\n", smallest);
}