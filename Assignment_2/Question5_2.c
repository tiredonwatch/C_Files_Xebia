#include <stdio.h>

void checkPerfectNumber(int number) {
    int divisor = 1, sum = 0;
    while (divisor < number) {
        if (number % divisor == 0) {
            sum += divisor;
        }
        divisor++;
    }
    if (sum == number) {
        printf("It's a perfect number.\n");
    } else {
        printf("It's not a perfect number.\n");
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkPerfectNumber(num);
    return 0;
}
