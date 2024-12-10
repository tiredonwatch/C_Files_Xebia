#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the x-coordinate: ");
    scanf("%d", &x);
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("The coordinate (%d, %d) lies in the First Quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The coordinate (%d, %d) lies in the Fourth Quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The coordinate (%d, %d) lies in the Second Quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The coordinate (%d, %d) lies in the Third Quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The coordinate (%d, %d) lies on the Y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The coordinate (%d, %d) lies on the X-axis.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The coordinate (%d, %d) is at the Origin.\n", x, y);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
