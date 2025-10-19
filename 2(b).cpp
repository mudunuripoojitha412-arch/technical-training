#include <stdio.h>
#include <ctype.h>  // for tolower() and isalpha()

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    char ch;

    // Input string
    printf("Enter a string: ");
    gets(str);  // (use fgets in modern compilers if preferred)

    // Traverse each character
    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);  // convert to lowercase for easy checking

        if (isalpha(ch)) {  // check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Output results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
