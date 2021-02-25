#include <stdio.h>

int strlen(char *);
int main() {
    printf("strlen: %s = %d\n", "Hello, World!\n", strlen("Hello, World!\n"));
    return 0;
}

int strlen(char *str) {
    int c = 0;
    while (*str) {
        str++;
        c++;
    }
    return c;
}
