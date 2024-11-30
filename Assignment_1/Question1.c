#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder;
    int counter =0;
    int sum= 0;
    

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0) 
    {
        originalNumber = originalNumber/10;
        counter++;
    }

    originalNumber = number;

    while (originalNumber != 0) 
    {
        remainder = originalNumber%10;
        sum = sum + pow(remainder, counter);
        originalNumber = originalNumber/10;
    }

    if (sum == number) 
    {
        printf("%d is an Armstrong number.\n", number);
    } 
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
