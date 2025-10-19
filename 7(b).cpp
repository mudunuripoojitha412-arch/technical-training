#include <stdio.h>
#include <string.h>

union BankAccount {
    int accNumber;
    char name[50];
    float balance;
};

int main() {
    union BankAccount account;

    // Input account number
    printf("Enter Account Number: ");
    scanf("%d", &account.accNumber);
    printf("Stored Account Number: %d\n", account.accNumber);

    // Input account holder name
    printf("\nEnter Account Holder Name: ");
    scanf(" %[^\n]", account.name); // read string with spaces
    printf("Stored Account Holder Name: %s\n", account.name);

    // Input account balance
    printf("\nEnter Account Balance: ");
    scanf("%f", &account.balance);
    printf("Stored Account Balance: %.2f\n", account.balance);

    // Display memory used by union
    printf("\nSize of union BankAccount: %zu bytes\n", sizeof(account));

    return 0;
}

