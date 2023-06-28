#include <stdio.h>
#include <string.h>

void main(){
    char names[100][30], temp[30];
    int n, i, j;
    printf("Enter no of students: ");
    scanf("%d", &n);

    printf("Enter names: ");
    for(i=0; i<n; i++)
        scanf(" %[^\n]", names[i]);


    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(names[i], names[j]) > 0)
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }

    for(i = 0; i < n; i++)
        printf("%s ", names[i]);
}
