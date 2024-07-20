#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    int intNum1, intNum2, intResult;

    printf("Welcome to the Simple Calculator\n");
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    if (operator == '%') {
        printf("Enter two integer operands: ");
        scanf("%d %d", &intNum1, &intNum2);
    } else {
        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (intNum2 != 0) {
                intResult = intNum1 % intNum2;
                printf("%d %% %d = %d\n", intNum1, intNum2, intResult);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
