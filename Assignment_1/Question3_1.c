#include<stdio.h>


int subtract(int a, int b) {

    return a + (~b + 1);
}

int main() {
    int firstNumber, secondNumber;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);


    int result = subtract(firstNumber, secondNumber);

    printf("The result of %d - %d is: %d\n", firstNumber, secondNumber, result);

    return 0;
}
