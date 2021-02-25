#include <stdio.h>

int main() {
    float inches;
    char name[10];

    printf("Please enter your height in inches and name: ");
    scanf("%f %s", &inches, name);
    printf("%s, you are %.2f feet tall\n", name, inches/12);
    return 0;
}
