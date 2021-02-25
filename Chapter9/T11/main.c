#include <stdio.h>

long Fibonacci(int n);
int main() {
    int n;
    scanf("%d", &n);
    printf("Fibonacci n: %ld\n", Fibonacci(n));
    return 0;
}

long Fibonacci(int n) {
    if (n < 3)
        return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}
