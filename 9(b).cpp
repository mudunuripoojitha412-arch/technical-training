#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char str[], int l, int r) {
    int i;
    if(l == r) {
        printf("%s\n", str);
    } else {
        for(i = l; i <= r; i++) {
            swap(&str[l], &str[i]);         // Swap current index with loop index
            permute(str, l + 1, r);         // Recur for the rest of the string
            swap(&str[l], &str[i]);         // Backtrack to original configuration
        }
    }
}

int main() {
    char str[20];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("All permutations of the string:\n");
    permute(str, 0, strlen(str) - 1);

    return 0;
}

