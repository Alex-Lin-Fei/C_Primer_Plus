#include <stdio.h>
#define STOP '#'

int main() {
    int count = 0;
    char ch;

    while ((ch = getchar()) != STOP) {
//        getchar();
        count++;

        printf("%c %4d  ", ch, ch);
        if (count % 8 == 0)
            putchar('\n');
    }
    return 0;
}
