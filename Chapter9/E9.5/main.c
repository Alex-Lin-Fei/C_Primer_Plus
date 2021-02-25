#include <stdio.h>

int imax(int x, int b);
int main() {
    printf("the maximum of %hu and %u is %d\n",
            2, 7.9, imax(2.4, 8.9));
    return 0;
}

int imax(int a, int b) {
    return a > b ? a : b;
}
