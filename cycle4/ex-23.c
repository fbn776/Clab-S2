#include <stdio.h>

int binarySearch(int arr[], int top, int btm, int key) {
	int mdl = top + (btm - top) / 2;
	if (top > btm)
		return -1;
	if (arr[mdl] == key)
		return mdl;
	if (key > arr[mdl])
		return binarySearch(arr, top, mdl - 1, key);

	return binarySearch(arr, mdl + 1, btm, key);
}

void main() {
	int arr[100], n, i, index, key;
	printf("Enter size: ");
	scanf("%d", &n);

	printf("Enter numbers: ");
	for(i=0; i<n; i++)
		scanf(" %d", &arr[i]);

	printf("Enter key to search for: ");
	scanf(" %d", &key);

	index = binarySearch(arr, 0, n-1, key);
	if(index == -1)
		printf("Item not found\n");
	else
		printf("Found %d at %d\n", key, index + 1);
}