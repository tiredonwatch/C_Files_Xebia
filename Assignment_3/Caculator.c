#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double addition(double a, double b);
double subtraction(double a, double b);
double division(double a, double b);
double multiplication(double a, double b);
double squareroot(double a);

int main(void) {
    int calculator;
    double num1, num2;

    printf("***Calculator***\n\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n\n");


    printf("Choose an Option: ");
    scanf("%d", &calculator);

    switch(calculator) {
        case 1:
            printf("\nYou chose Addition.\n");
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            printf("\nResult: %.2lf\n", addition(num1, num2));
            break;
        case 2:
            printf("\nYou chose Subtraction.\n");
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            printf("\nResult: %.2lf\n", subtraction(num1, num2));
            break;
        case 3:
            printf("\nYou chose Multiplication.\n");
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            printf("\nResult: %.2lf\n", multiplication(num1, num2));
            break;
        case 4:
            printf("\nYou chose Division.\n");
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            if (num2 == 0) {
                printf("\nError! Division by zero is not allowed.\n");
            } else {
                printf("\nResult: %.2lf\n", division(num1, num2));
            }
            break;
        case 5:
            printf("\nYou chose Square Root.\n");
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("\nError! Square root of a negative number is not defined in real numbers.\n");
            } else {
                printf("\nResult: %.2lf\n", squareroot(num1));
            }
            break;
        default:
            printf("\nNot a valid option. Please enter a valid option.\n");
    }

    return 0;
}

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double division(double a, double b) {
    return a / b;
}

double multiplication(double a, double b) {
    return a * b;
}

double squareroot(double a) {
    return sqrt(a);
}
