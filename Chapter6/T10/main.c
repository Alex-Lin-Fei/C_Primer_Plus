#include <stdio.h>

void func(int low, int high);
int main() {
    int low, high;

    printf("Enter lower and upper integer limits: ");
    ;
    while (scanf("%d %d", &low, &high) == 2 && low < high) {
        func(low, high);
        printf("Enter next set of limits: ");
    }
    printf("Done\n");

    return 0;
}

void func(int low, int high) {
    printf("The sums of the squares from %d to %d is %d\n", low*low, high*high,
            high*(high+1)*(2*high+1)/6-low*(low-1)*(2*low-1)/6);
}
