#include <stdio.h>

void func(double*, double *, double *);
int main() {
    double a,b,c;
    scanf("%lf %lf%lf", &a,&b,&c);
    func(&a,&b,&c);
    printf("a: %f; b: %lf; c:%lf\n",a,b,c);
    return 0;
}

void func(double* a, double* b, double * c) {
    int a1 = *a;
    int b1 = *b;
    int c1 = *c;

    if (a1 > b1) {
        int t = a1;
        a1 = b1;
        b1 = t;
    }
    if (b1 > c1) {
        int t = c1;
        c1 = b1;
        b1 = t;
    }
    if (a1 > b1) {
        int t = a1;
        a1 = b1;
        b1 = t;
    }
    *a = a1;
    *b = b1;
    *c = c1;
}
