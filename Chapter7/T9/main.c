#include <stdio.h>

#include <stdbool.h>

int main() {
    int digit;
    bool isPrime;

    printf("Enter the digit: ");
    scanf("%d", &digit);
    for (int i = 2; i <= digit; i++) {
        isPrime = true;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        if(isPrime)
            printf("%d ", i);
    }


    return 0;
}
