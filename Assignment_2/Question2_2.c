#include <stdio.h>

int main() {
    int num1=0;
    int num2=0;
    int store=0;

    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);

    while (num2 != 0) {
        store = num2;
        num2 = num1 % num2;
        num1 = store;
    }

    printf("HCF is %d\n", num1);

    return 0;
}
