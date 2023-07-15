/*
 * Ex - 26
 * Store the regno, name and 4 marks of a set of students in an array of structure and
display the details along with total marks in the descending order of total marks.
 */

#include <stdio.h>

typedef struct {
	int regno;
	char name[20];
	int marks[4];
	int total;
} Student;

int main() {
	Student students[30];
	int n, i, j;
	printf("Enter number of students: ");
	scanf("%d", &n);

	//Get the data
	printf("Enter students details\n");
	for (i = 0; i < n; i++) {
		students[i].total = 0;
		printf("Student %d\n", i + 1);
		printf("%10s: ", "Reg-no");
		scanf(" %d", &students[i].regno);

		printf("%10s: ", "Name");
		scanf(" %[^\n]", students[i].name);

		printf("%10s: ", "marks");
		for (j = 0; j < 4; j++) {
			scanf(" %d", &students[i].marks[j]);
			students[i].total += students[i].marks[j];
		}
	}

	//Sort the student's array using the `total` member value;
	for (i = 0; i < n; i++)
		for(j=0; j < n-i-1; j++)
			if(students[j].total < students[j+1].total) {
				Student temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}

	//Format the data and display it as a table.
	printf("%-6s %-21s%-6s %-6s %-6s %-6s %-5s\n", "Reg-no", "Name", "Mark 1", "Mark 2", "Mark 3", "Mark 4", "Total");
	for(i = 0; i < n; i++) {
		printf("%6d %-21s", students[i].regno, students[i].name);
		for(j=0; j < 4; j++)
			printf("%6d ",students[i].marks[j]);
		printf("%5d\n", students[i].total);
	}
}