#include <stdio.h>

int main() {
    char ch;
    int sum=0;

    while ((ch=getchar())!='#') {
        switch (ch) {
            case '.':
                putchar('!');
                sum++;

                break;
            case '!':
                putchar('!');
                putchar('!');
                sum++;

                break;
            default:putchar(ch);
                break;
        }

    }
    printf("%d\n",sum);

    return 0;
}
