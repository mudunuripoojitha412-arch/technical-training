#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2, *f3;
    char ch;

    // Open first file in read mode
    f1 = fopen("file1.txt", "r");
    if (f1 == NULL) {
        printf("Cannot open file1.txt\n");
        exit(1);
    }

    // Open second file in read mode
    f2 = fopen("file2.txt", "r");
    if (f2 == NULL) {
        printf("Cannot open file2.txt\n");
        fclose(f1);
        exit(1);
    }

    // Open third file in write mode
    f3 = fopen("merged.txt", "w");
    if (f3 == NULL) {
        printf("Cannot create merged.txt\n");
        fclose(f1);
        fclose(f2);
        exit(1);
    }

    // Copy contents of file1 to file3
    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f3);

    // Copy contents of file2 to file3
    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, f3);

    printf("Files merged successfully into merged.txt\n");

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}

