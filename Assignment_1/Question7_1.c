#include <stdio.h>
#include <math.h>

void decimalToBinary(int num);
void binaryToDecimal(int num);

int main() {
    int num, choice;

    printf("Choose an option:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Exit\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        decimalToBinary(num);
    } else if (choice == 2) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        binaryToDecimal(num);
    } else if (choice == 3) {
        printf("Exited Successfully.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}

void decimalToBinary(int num) {
    int binary[32] = {0};
    int i = 0;

    while (num != 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

void binaryToDecimal(int num) {
    int sum = 0, temp = num, count = 0;

    while (temp != 0) {
        sum += pow(2, count) * (temp % 10);
        temp /= 10;
        count++;
    }

    printf("Decimal: %d\n", sum);
}
