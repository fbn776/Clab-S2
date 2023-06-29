#include <stdio.h>

char lowerCaseOf(char ch) {
	return (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
}

int isPalindrome(char word[]) {
	int i = 0, j, len = 0;
	//Get the length of the string;
	while (word[len]) len++;
	j = len - 1;
	while (i <= j)
		if (lowerCaseOf(word[i++]) != lowerCaseOf(word[j--]))
			return 0;
	return 1;
}

void main() {
	char text[5000], words[100][50];
	int i = 0, startIndex = 0, wordsIndex = 0;

	printf("Enter text: ");
	scanf("%[^\n]", text);

	while (text[i] != '\0') {
		if (text[i] == ' ') {
			startIndex = 0;
			wordsIndex++;
			i++;
		}
		words[wordsIndex][startIndex++] = text[i++];
	}

	printf("Palindrome words are: ");
	for (i = 0; i < wordsIndex + 1; i++) {
		if(isPalindrome(words[i]))
			printf("%s ", words[i]);
	}
	printf("\n");
}