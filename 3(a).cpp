#include <stdio.h>
#include <string.h>

// Function to get integer value of a Roman symbol
int value(char r) {
    switch (r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main() {
    char roman[20];
    int i, total = 0, s1, s2;

    printf("Enter a Roman numeral (in uppercase): ");
    scanf("%s", roman);

    int len = strlen(roman);

    for (i = 0; i < len; i++) {
        s1 = value(roman[i]);
        if (i + 1 < len) {
            s2 = value(roman[i + 1]);
            if (s1 >= s2)
                total += s1;
            else {
                total += (s2 - s1);
                i++;  // Skip the next character
            }
        } else {
            total += s1;
        }
    }

    printf("Integer value = %d\n", total);
    return 0;
}

