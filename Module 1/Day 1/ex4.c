//4. Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.

#include <stdio.h>

int main() {
    float operand1, operand2, result;
    char operator;

    // Read inputs from the user
    printf("Enter Operand 1: ");
    scanf("%f", &operand1);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Operand 2: ");
    scanf("%f", &operand2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check for division by zero
            if (operand2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = operand1 / operand2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    // Display the result
    printf("Result: %.2f\n", result);

    return 0;
}
