#include <stdio.h>

double power(double,int);
int main() {
    double base;
    int p;

    printf("Enter two number:\n");
    scanf("%lf %d", &base, &p);
    printf("%lf ^ %d = %lf\n", base, p, power(base, p));
    return 0;
}

double power(double base,int p) {
    double res = 1;
    while (p--) {
        res *= base;
    }
    return res;
}