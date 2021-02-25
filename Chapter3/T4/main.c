#include <stdio.h>

int main() {
    float f;
    printf("Enter a floating-point value: ");
    scanf("%f", &f);
    printf("fixed-point notation: %f\n", f);
    printf("exponential notation: %e\n", f);
    printf("p notation: %a\n",f);
    printf("Hello, World!\n");
    return 0;
}
