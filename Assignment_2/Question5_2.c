#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter number of subjects: ");
    scanf("%d", &num);

    int marks[num];
    for (int i = 0; i < num; i++) {
        printf("Enter marks of subject %d: \n", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] > 100 || marks[i] < 0) {
            printf("Try Again\nMarks should be between 0 to 100\n");
            i--;  // Repeat this iteration
        } else {
            sum += marks[i];
        }
    }

    printf("Sum of all subjects marks is %d\n", sum);
    return 0;
}
