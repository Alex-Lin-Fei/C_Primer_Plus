#include <stdio.h>

int findMaxDoubleArraySubscript(double [], int);
int main() {
    double arr[4];

    for (int i = 0; i < 4; i++)
        scanf("%lf", &arr[i]);

    for (int i = 0; i < 4; i++)
        printf("arr[%d]: %lf\n", i, arr[i]);

    printf("\nthe maximum subscript is %d\n", findMaxDoubleArraySubscript(arr, 4));
    return 0;
}

int findMaxDoubleArraySubscript(double arr[], int n) {
    int script = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] > arr[script])
            script = i;

    }
    return script;
}
