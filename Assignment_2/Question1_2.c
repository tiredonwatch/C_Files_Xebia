#include <stdio.h>

void printArray(int array[], int size) {
    printf("[");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d]\n", array[size - 1]);
}

void updateArray(int array[], int size, int increment) {
    for (int i = 0; i < size; i++) {
        array[i] += increment;
    }
}

int main() {
    int n, increment;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    printf("Enter the value to add to each element: ");
    scanf("%d", &increment);
    
    printf("Array before updating: ");
    printArray(array, n);
    
    updateArray(array, n, increment);
    
    printf("Array after updating: ");
    printArray(array, n);
    
    return 0;
}
