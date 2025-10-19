#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, index;
    int letters[26] = {0};  // To mark presence of each alphabet

    printf("Enter a string: ");
    gets(str);  // For simplicity (can use fgets in modern compilers)

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {  // check if it's a letter
            index = tolower(str[i]) - 'a';  // convert to 0–25
            letters[index] = 1;  // mark the letter as found
        }
    }

    // Check if all 26 letters are present
    for (i = 0; i < 26; i++) {
        if (letters[i] == 0) {
            printf("The given string is NOT a Pangram.\n");
            return 0;
        }
    }

    printf("The given string IS a Pangram.\n");
    return 0;
}

