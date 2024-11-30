#include <stdio.h>
#include <stdlib.h>

double addition(double a, double b);
double subtraction(double a, double b);
double division(double a, double b);
double multiplication(double a, double b);


int main(void)
{
    int calculator;
    double num1, num2;

    printf("***Calculator***\n\n\n");

    printf("Enter the first number:");
    scanf("%lf", &num1);
    printf("Enter the second number:");
    scanf("%lf", &num2);
    printf("\n\n");

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\n");
    printf("Choose an Option: ");
    scanf("%d", &calculator);

    switch(calculator) {
        case 1:
            printf("\nBy Addition the ");
            printf("Result: %.2lf\n", addition(num1, num2));  // Call addition
            break;
        case 2:
            printf("\nBy Subtraction the ");
            printf("Result: %.2lf\n", subtraction(num1, num2));  // Call subtraction
            break;
        case 3:
            printf("\nBy Multiplication the ");
            printf("Result: %.2lf\n", multiplication(num1, num2));  // Call multiplication
            break;
        case 4:
            if (num2 == 0) {
                printf("\nError! Division by zero is not allowed.\n");
            } 
            else {
                printf("\nBy Division the ");
                printf("Result: %.2lf\n", division(num1, num2));  // Call division
            }
            break;
        default:
            printf("\nNot a valid option. Please enter a valid option.\n");
    }

}

double addition(double a, double b)
{
    return a+b;
}

double subtraction(double a, double b)
{
    return a-b;
}

double division(double a, double b)
{
    return a/b;
}

double multiplication(double a, double b)
{
    return a*b;
}
