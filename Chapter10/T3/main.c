#include <stdio.h>
#include <float.h>

int findMax(int [], int);
int main() {
    int arr[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("maximum: %d\n", findMax(arr, 5));
    return 0;
}

int findMax(int arr[], int n) {
    int maxx = arr[0];
    for (int i = 1; i < n; i++)
        maxx = maxx >= arr[i]? maxx: arr[i];
    return maxx;
}
