#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode
    fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    // Input and store student records
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s.id);
        printf("Name: ");
        scanf(" %[^\n]", s.name); // read string with spaces
        printf("Marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(s), 1, fp); // write struct to file
    }

    fclose(fp);

    // Read and display student records
    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    printf("\nStored Student Records:\n");
    printf("ID\tName\t\tMarks\n");
    printf("--------------------------------\n");
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        printf("%d\t%-15s\t%.2f\n", s.id, s.name, s.marks);
    }

    fclose(fp);
    return 0;
}

