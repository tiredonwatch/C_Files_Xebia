#include <stdio.h>

int main() {
    int j, space = 8;

    for (int i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", j % 2 == 0 ? 0 : 1);
        }

        for (int k = 0; k < space; k++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%d", j % 2 == 0 ? 0 : 1);
        }

        space -= 2;
        printf("\n");
    }

    return 0;
}
