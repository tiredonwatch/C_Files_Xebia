#include <stdio.h>

void calculateAverage(int numStudents, int marks[]);

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int marks[numStudents];
    for (int i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\n");
    calculateAverage(numStudents, marks);

    return 0;
}

void calculateAverage(int numStudents, int marks[]) {
    int sum = 0;
    float average;

    for (int i = 0; i < numStudents; i++) {
        sum += marks[i];
    }

    average = (float)sum / numStudents;
    printf("The average score is: %.2f", average);
}
