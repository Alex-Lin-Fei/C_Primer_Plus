#include <stdio.h>

double min(double , double );
int main() {
    double a, b;

    printf("Enter a and b: ");
    scanf("%lf %lf", &a,&b);
    printf("the minimum of %f and %f is %f\n",a,b,min(a,b));
    return 0;
}

double min(double a, double b) {
    return (a>b)? b:a;
}
