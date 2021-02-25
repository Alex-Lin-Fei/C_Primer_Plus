#include <stdio.h>
#include <math.h>

double power(double , int);
int main() {
    double a;
    int b;

    scanf("%lf %d", &a, &b);
    printf("%lf ^ %d = %lf\n", a,b,power(a,b));
    return 0;
}

double power(double a, int b) {
    int bb = fabs(b);
    if (bb==0)
        return 1;
    double res =  a * power(a,bb-1);
    if (b < 0)
        res = 1/res;
    return res;
}