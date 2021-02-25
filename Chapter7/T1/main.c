#include <stdio.h>
#include <ctype.h>
#define STOP '#'

int main() {
    char ch;
    int blanks = 0;
    int lines=  0;
    int other=0;

    while ((ch =getchar()) != STOP) {
        if (isblank(ch))
            blanks++;
        else if ('\n' == ch)
            lines++;
        else
            other++;
    }

    printf("blanks: %d; lines: %d; other: %d\n", blanks, lines, other);
    return 0;
}
