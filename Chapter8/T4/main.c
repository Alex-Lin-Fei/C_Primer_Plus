#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int s=0;

    while ((ch=getchar())!=EOF) {
        if (ch!='\n')
        putchar(ch);
    }

    printf("%d\n", s);
    return 0;
}
