#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter the number of students: ");
    scanf("%d", &num);

    int marks[num];
    for (int i = 0; i < num; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input. Marks should be between 0 and 100. Try again.\n");
            i--;
        }
    }

    for (int i = 0; i < num; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99 marks.\n", i + 1);
            count++;
        }
    }

    printf("\n%d students scored 99 marks.\n", count);
    return 0;
}
