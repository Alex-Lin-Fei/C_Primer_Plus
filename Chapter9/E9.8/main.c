#include <stdio.h>
void to_binary(unsigned long n);

int main() {
    unsigned long number;
    printf("Enter an integer (q to quit): ");
    while (scanf("%lu", &number) == 1) {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit): ");
    }
    return 0;
}

void to_binary(unsigned long x) {
    int r;

    r = x %2;
    if (x>=2)
        to_binary(x/2);
    putchar(r==0?'0':'1');
}
