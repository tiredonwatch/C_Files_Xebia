#include <stdio.h>

void printArray(int array[], int size) {
    printf("[");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d]\n", array[size - 1]);
}

void assignGrades(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        if (marks[i] >= 75) {
            printf("Student %d: Grade A\n", i + 1);
        } else if (marks[i] >= 60) {
            printf("Student %d: Grade B\n", i + 1);
        } else if (marks[i] >= 40) {
            printf("Student %d: Grade C\n", i + 1);
        } else {
            printf("Student %d: Grade D\n", i + 1);
        }
    }
}

int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    printf("Marks should be between 0 and 100.\n");

    int marks[num];
    for (int i = 0; i < num; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input. Marks should be between 0 and 100. Try again.\n");
            i--;
        }
    }

    printf("Marks: ");
    printArray(marks, num);

    printf("\nGrades:\n");
    assignGrades(marks, num);

    return 0;
}
