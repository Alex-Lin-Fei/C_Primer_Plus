#include <stdio.h>

void alter(int*, int*);
int main() {
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    alter(&x, &y);
    printf("x: %d; y: %d\n", x, y);

    return 0;
}

void alter(int* x, int* y) {
    int plus = *x + *y;
    int minus = *x - *y;
    *x = plus;
    *y = minus;
}
