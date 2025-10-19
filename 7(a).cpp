#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[50];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name); // read string with spaces
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\nEmployee Records:\n");
    printf("ID\tName\t\tSalary\n");
    printf("-------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%-15s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}

