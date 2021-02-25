#include <stdio.h>
#include <math.h>

double power(double ,int );
int main() {
double a;
int b;
scanf("%lf %d", &a,&b);

    printf("%f^%d = %lf\n", a,b,power(a,b));
    return 0;
}

double power(double b, int n) {
    if (n == 0) {
        if (b == 0)
            printf("Not define\n");
        return 1;
    }
    int nn = fabs(n);
    double res = 1;
    while (nn--)
        res *= b;
    if (n < 0)
        res = 1 / res;
    return res;
}