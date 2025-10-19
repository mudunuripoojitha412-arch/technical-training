#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    // Input operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c to avoid newline issues

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation using switch
    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

