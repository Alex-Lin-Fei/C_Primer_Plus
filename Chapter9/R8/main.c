#include <stdio.h>

int maxThree(int one, int two, int three);
int main() {
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);

    printf("among %d, %d and %d the maximum is %d!\n", a, b, c, maxThree(a, b, c));
    return 0;
}
int maxThree(int one, int two, int three) {
    if (two <= one && three <= one)
        return one;
    else if (one <= two && three <= two)
        return two;
    return three;
}
