#include <stdio.h>
#include <math.h>

void computeCub(double num);
int main() {
    double num;

    printf("Enter a double num: ");
    scanf("%f", &num);
    computeCub(num);
    return 0;
}

void computeCub(double num){
    printf("%lf %lf\n", num, pow(num,3));
}