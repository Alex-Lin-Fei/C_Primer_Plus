#include <stdio.h>

void Temperatures(double temperature) {
    printf("%f C\n", 5.0 / 9.0 * (temperature - 32.0));
    printf("%f K\n", 273.16 + temperature);
}
int main() {
    double temperature;

    printf("Enter the temperature: ");
    while(scanf("%lf", &temperature)){
        Temperatures(temperature);
        printf("Enter the temperature: ");
    }
    printf("Done!\n");
    return 0;
}
