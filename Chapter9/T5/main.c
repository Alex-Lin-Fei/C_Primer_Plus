#include <stdio.h>

void larger_of(double* ,double* );
int main() {
    double a,b;

    printf("Enter two double : ");
    scanf("%lf %lf", &a,&b);
    larger_of(&a,&b);
    printf("a: %f; b: %lf\n",a,b);
    return 0;
}

void larger_of(double* a, double* b) {
    double temp = (*a > *b)? *a: *b;
    *a = *b = temp;
}
