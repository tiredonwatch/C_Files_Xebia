#include <stdio.h>

int isPrime(int num) {
    int divisorCount = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisorCount++;
        }
    }
    return divisorCount == 2;  // Prime numbers have exactly 2 divisors (1 and the number itself)
}

int main() {
    int numElements;
    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    int numbers[numElements];
    for (int i = 0; i < numElements; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int primeCount = 0;
    for (int i = 0; i < numElements; i++) {
        if (isPrime(numbers[i])) {
            primeCount++;
        }
    }

    printf("There are %d prime numbers.\n", primeCount);

    return 0;
}
