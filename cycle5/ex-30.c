/*
 * Ex - 30
 * The smallest number in a list of integers using command line argument.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argn, char **arg) {
	int i, smallest, num;

	if(argn == 1)
		return 0;

	smallest = atoi(arg[1]);
	for(i = 1; i < argn; i++) {
		num = atoi(arg[i]);
		if(num < smallest)
			smallest = num;
	}

	printf("Smallest is %d\n", smallest);
}