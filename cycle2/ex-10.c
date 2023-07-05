/*
Ex - 10
Bubble sort of N integers
*/
#include <stdio.h>
void main() {
    int N, nums[30], i, j;
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter numbers: ");
    for (i = 0; i < N; i++)
        scanf(" %d", &nums[i]);

    for (i = 0; i < N; i++)
        for(j=0; j < N-i-1; j++)
            if(nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }

    for(i=0; i<N; i++)
        printf("%d ", nums[i]);

    printf("\n");
}