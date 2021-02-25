#include <stdio.h>

double gap(const double [], int);
int main() {
    double arr[5];

    for (int i = 0; i < 5; i++)
        arr[i] = i*3;
    printf("%f\n", gap(arr, 5));
    return 0;
}

double gap(const double arr[], int r) {
    double minD = arr[0];
    double maxD = arr[0];
    for (int i = 1; i < r; i++) {
        if (arr[i] > maxD)
            maxD = arr[i];
        else if (arr[i] < minD)
            minD = arr[i];
    }
    return maxD - minD;
}
