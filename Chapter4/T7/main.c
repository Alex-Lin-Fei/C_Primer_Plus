#include <stdio.h>
#include <float.h>

int main() {
    double n1 = 1.0 / 3.0;
    float n2 = 1.0 / 3.0;

    printf("%.6lf %.6f\n", n1, n2);
    printf("%.12lf %.12f\n", n1, n2);
    printf("%.16lf %.16f\n", n1, n2);
    printf("%lf %lf", FLT_DIG, DBL_DIG);
    return 0;
}
