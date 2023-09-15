#include <stdio.h>

int main() {
    char operation, calculateAgain = 'y';
    double num1, num2;

    printf("Calculator application!\n");

    while (calculateAgain != 'n') {
        printf("Enter the calculation (num1 + num2):\n");
        scanf("%lf", &num1);
        scanf(" %c", &operation);
        scanf("%lf", &num2);

        switch (operation) {
            case '+':
                printf("Result: %.2lf\n", num1+num2);
                break;
            case '-':
                printf("Result: %.2lf\n", num1-num2);
                break;
            case '*':
                printf("Result: %.2lf\n", num1*num2);
                break;
            case '/':
                printf("Result: %.2lf\n", num1/num2);
                break;
            default:
                printf("Invalid operation\n");
        }

        printf("Do you want to do another calculation? (y/n)\n");
        scanf(" %c", &calculateAgain);
    }

    return 0;
}