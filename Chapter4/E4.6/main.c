#include <stdio.h>
#define PI 3.141593

int main() {
    int number = 7;
    double pies = 12.22233333333;
    int cost = 7800;

    printf("The %d contestants ate %lf berry pies.\n", number,
            pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$',2*cost);
    return 0;
}
