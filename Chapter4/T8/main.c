#include <stdio.h>
#define GALLON 3.785
#define MILE 1.609

int main() {
    float mileage;
    float gallon;

    printf("Enter the mileage and gallon: ");
    scanf("%f %f", &mileage, &gallon);

    printf("%f\n", gallon * GALLON / MILE / mileage);
    return 0;
}
