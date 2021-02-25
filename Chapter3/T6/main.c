#include <stdio.h>

int main() {
    double  quarts, n;
    double m = 3.0e-23;
    printf("input the number of quarts: ");
    scanf("%lf", &quarts);
    n = quarts*950/m;
    printf("the number of H2O molecules is : %e\n",n);
    return 0;
}
