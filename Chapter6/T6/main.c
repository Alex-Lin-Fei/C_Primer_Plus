#include <stdio.h>

void print(int low, int high);
int main() {
    int low;
    int high;

    printf("Enter the low and high: ");
    scanf("%d %d", &low, &high);
    print(low,high);
    return 0;
}

void print(int low, int high) {
    for (int i = low; i <= high; i++)
        printf("%5d %5d %5d\n", i, i*i, i*i*i);
}
