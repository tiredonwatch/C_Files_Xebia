#include <stdio.h>

int findMaxMarks(int marks[], int numStudents) {
    int highestMark = -1000000;
    for (int i = 0; i < numStudents; i++) {
        if (highestMark < marks[i]) {
            highestMark = marks[i];
        }
    }
    return highestMark;
}

int findMinMarks(int marks[], int numStudents) {
    int lowestMark = 1000000;
    for (int i = 0; i < numStudents; i++) {
        if (lowestMark > marks[i]) {
            lowestMark = marks[i];
        }
    }
    return lowestMark;
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int marks[numStudents];
    for (int i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input. Marks should be between 0 and 100. Please try again.\n");
            i--;
        }
    }

    printf("The highest mark is: %d\n", findMaxMarks(marks, numStudents));
    printf("The lowest mark is: %d\n", findMinMarks(marks, numStudents));

    return 0;
}
