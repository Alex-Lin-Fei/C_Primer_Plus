#include <stdio.h>

double avg(double, double );
int main() {
    double a,b;

    printf("Enter two double: ");
    scanf("%lf %lf", &a,&b);
    printf("The average of %f and %f is %f.\n", a,b,avg(a,b));
    return 0;
}

double avg(double a, double b) {
    return 2 * a * b / (a + b);
}