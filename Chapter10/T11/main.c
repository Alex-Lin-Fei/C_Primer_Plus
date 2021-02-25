#include <stdio.h>

void show_arr(int [][5], int);
void double_arr(int [][5], int);
int main() {
    int arr[3][5] = {{2}};

    show_arr(arr, 3);
    double_arr(arr, 3);
    show_arr(arr, 3);

    return 0;
}

void show_arr(int arr[][5], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

void double_arr(int arr[][5], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            arr[i][j] *= 2;
}
