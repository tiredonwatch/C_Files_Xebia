#include <stdio.h>

void pascal_triangle(int rows);
long long C(long n, long r);
long long factorial(long n);

int main() {
    int rows;
    printf("Enter the number of rows of Pascal triangle:\n");
    scanf("%d", &rows);
    pascal_triangle(rows);
    return 0;
}

long long C(long n, long r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

long long factorial(long n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void pascal_triangle(int rows) {
    printf("Pascal Triangle\n");
    for (int i = 0; i < rows; i++) {
        for (int s = 0; s <= rows - i; s++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%lld ", C(i, j));
        }
        printf("\n");
    }
}
