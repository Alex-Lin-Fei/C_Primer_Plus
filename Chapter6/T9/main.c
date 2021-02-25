#include <stdio.h>

void func(double, double);
int main() {
    double num1, num2;

    printf("Enter the two number: ");
    scanf("%lf %lf", &num1, num2);
    func(num1, num2);

    return 0;
}

void func(double n1, double n2) {
    printf("%lf\n", (n1-n2)/(n1*n2));
}
