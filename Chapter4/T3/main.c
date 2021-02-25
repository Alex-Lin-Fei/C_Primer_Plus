#include <stdio.h>

int main() {
    float num;

    printf("Enter a float number: ");
    scanf("%f", &num);

    printf("float notation: %f; scientific notation: %e\n", num, num);
    return 0;
}
