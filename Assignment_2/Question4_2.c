#include <stdio.h>

void swapMethod1(int a, int b);
void swapMethod2(int *ptr1, int *ptr2);
void swapMethod3(int a, int b);
void swapMethod4(int a, int b);

int main() {
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d%d", &num1, &num2);
    swapMethod4(num1, num2);
    return 0;
}

void swapMethod1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Swapped Successfully.\n");
    printf("1st number = %d\n2nd number = %d\n", a, b);
}

void swapMethod2(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Swapped Successfully.\n");
    printf("1st number = %d\n2nd number = %d\n", *ptr1, *ptr2);
}

void swapMethod3(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped Successfully.\n");
    printf("1st number = %d\n2nd number = %d\n", a, b);
}

void swapMethod4(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Swapped Successfully.\n");
    printf("1st number = %d\n2nd number = %d\n", a, b);
}
