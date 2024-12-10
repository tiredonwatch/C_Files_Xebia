#include <stdio.h>

void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

void deleteAtFront(int arr[], int *size) {
    if (*size <= 0) {
        printf("The array is already empty.\n");
        return;
    }
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteAtPosition(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteAtEnd(int arr[], int *size) {
    if (*size <= 0) {
        printf("The array is already empty.\n");
        return;
    }
    (*size)--;
}

int main() {
    int arr[100], size, position, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("The array must have at least one element.\n");
        return 0;
    }

    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array before deletion: \n");
    printArray(arr, size);

    printf("*************************\n");
    printf("1. Delete from the front\n");
    printf("2. Delete from the middle\n");
    printf("3. Delete from the back\n");
    printf("*************************\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        deleteAtFront(arr, &size);
        printf("Array after deleting from the front: \n");
        printArray(arr, size);
    } else if (choice == 2) {
        printf("Enter the position to delete (0 to %d): ", size - 1);
        scanf("%d", &position);
        deleteAtPosition(arr, &size, position);
        printf("Array after deleting from position %d: \n", position);
        printArray(arr, size);
    } else if (choice == 3) {
        deleteAtEnd(arr, &size);
        printf("Array after deleting from the back: \n");
        printArray(arr, size);
    } else {
        printf("Invalid choice! Please enter a valid option.\n");
    }

    return 0;
}
