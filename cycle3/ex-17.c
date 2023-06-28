#include <stdio.h>

void main() {
    char str[100];
    int i, count[26] = {0}, max = 0;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    for(i=0; str[i]; i++) {
        char ch = str[i];
        /*
         * Check if the current character is an alphabet, i.e. it's in b/w A-Z or a-z
         * Then, if it's a lower case alphabet; convert it to upper case (lower - upper = 32)
         * Then, map the current alphabet to a range of 0 to 25; this is indexes of the count array, where element at each index represent the corresponding alphabet frequency
         */
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if(ch >= 'a')
                ch -= 32;
            count[ch - 'A'] += 1;
        }
    }

    for(i=0; i<26; i++)
        if(count[max] < count[i])
            max = i;

    printf("Most occurring alphabet is %c with frequency %d\n", max + 'A', count[max]);
}