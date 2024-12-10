#include <stdio.h>

void cyclic_rotate(int arr[], int size) {
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    print_array(arr, size);
    
    cyclic_rotate(arr, size);
    
    printf("Array after cyclic rotation: ");
    print_array(arr, size);

    return 0;
}
