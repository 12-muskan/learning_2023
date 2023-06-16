#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Read Operand 1
    printf("Enter Number 1: ");
    scanf("%f", &num1);

    // Read Operator
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Read Operand 2
    printf("Enter Number 2: ");
    scanf("%f", &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            return 1;
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}
