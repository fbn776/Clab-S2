/*
Ex - 8
Linear search
29) Febin Nelson P, S2 CSE
*/
#include <stdio.h>

void main() {
    int numbers[30], N, i, key, found = 0, index;
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter numbers: ");

    for(i=0; i<N;i++)
        scanf(" %d", &numbers[i]);

    printf("Enter number to search: ");
    scanf(" %d", &key);

    for(i=0; i<N; i++)
        if(numbers[i] == key) {
            found = 1;
            index = i + 1;
            break;
        }

    if(found)
        printf("Found %d at index %d\n", key, index);
    else
        printf("Item not found\n");
}