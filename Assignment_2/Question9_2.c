#include <stdio.h>

void peak_num(int array[], int num) {
    for (int i = 1; i < num - 1; i++) {
        if (array[i] >= array[i - 1] && array[i] >= array[i + 1]) {
            printf("%d is a peak element.\n", array[i]);
        }
    }
}

int main() {
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    int array[num + 1];
    for (int i = 0; i < num; i++) {
        printf("Enter element %d: \n", i + 1);
        scanf("%d", &array[i]);
    }
    array[num] = -1000000;

    peak_num(array, num);
    return 0;
}
