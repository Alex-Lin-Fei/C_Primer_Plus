#include <stdio.h>

void copy_arr(double target[], double source[], int n);
void copy_ptr(double *, double *, int);
int main() {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5], target2[5], target3[5];;

    copy_arr(target1, source, 5);
    copy_ptr(target2, target1, 5);

    for (int i = 0; i < 5; i++)
        printf("target1[%d] = %f\n", i, target1[i]);
    for (int i = 0; i < 5; i++)
        printf("target2[%d] = %f\n", i, target2[i]);

    return 0;
}


void copy_arr(double target[], double source[], int n) {
    for (int i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(double * target, double * source, int n) {
    int i = 0;
    while (i<n){
        *target++ = *source++;
        i++;
    }
}
