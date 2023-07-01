/*
Ex - 2
Number of days in a month
*/
#include <stdio.h>

int main() {
    int month, year;
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    if(month > 12 || month < 1) {
        printf("Invalid month\n");
        return 0;
    }
    switch (month) {
        case 2:
            printf("Enter the year: ");
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("no of days is %d\n", 29);
            else
                printf("no of days is %d\n", 28);
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("no of days is %d\n", 30);
            break;

        default:
            printf("no of days is %d\n", 31);
            break;
    }
    return 0;
}
