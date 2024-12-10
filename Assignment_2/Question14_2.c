#include <stdio.h>

void printDuplicates(int arr[], int size) {
    int found = 0;
    int visited[size];
    
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }
    
    printf("Duplicate elements: ");
    
    for (int i = 0; i < size; i++) {
        if (visited[i] == 0) {
            int count = 0;
            for (int j = 0; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1;
                }
            }
            if (count > 1) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }
    
    if (!found) {
        printf("-1");
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    if (size <= 0) {
        printf("The array must have at least one element.\n");
        return 0;
    }
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printDuplicates(arr, size);
    
    return 0;
}
