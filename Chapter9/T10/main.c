#include <stdio.h>

void to_base_n(int,int );
int main() {
    int num, base;

    scanf("%d %d", &num, &base);
    to_base_n(num, base);
    return 0;
}

void to_base_n(int number,int base) {
    if (number >= base)
        to_base_n(number/base, base);
    putchar('0' + number%base);
}
