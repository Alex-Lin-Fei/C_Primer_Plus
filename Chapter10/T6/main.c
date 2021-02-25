#include <stdio.h>

int sum2d(int,int,int ar[][*]);
void sort(double [], int);
int main() {
    double arr[5];
    for (int i = 0; i < 5; i++)
        scanf("%lf", &arr[i]);
    sort(arr, 5);
    for (int i = 0; i < 5; i++)
        printf("%f ", arr[i]);

    return 0;
}

void sort(double arr[], int n) {
    for (int i = 1; i < n; i++) {
        int l = 0;
        int r = i - 1;

        while (l < r) {
            int mid = (l + r) >> 1;
            if (arr[i] < arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (arr[i] > arr[l])
            l++;
        int temp = arr[i];
        for (int j = i; j > l; j--)
            arr[j] = arr[j-1];
        arr[l]=temp;

        printf("%d: ", i);
        for (int k = 0; k < n; k++)
            printf("%f ", arr[k]);
        printf("\n");
    }
}

int sum2d(int r,int c, int ar[r][c]) {

}