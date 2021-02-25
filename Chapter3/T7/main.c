#include <stdio.h>

int main() {
    int inch;

    printf("enter your height in inches: ");
    scanf("%d", &inch);

    printf("Height in cm: %f\n", inch*2.54);
    return 0;
}
