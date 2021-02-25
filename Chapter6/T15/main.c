#include <stdio.h>

int main() {
    char ch[100];
    char c;
    int i=0;


    while (scanf("%c", &c) == 1 && c!='\n') {
            ch[i++]=c;
    }
    i--;
    while (i>=0) {
        putchar(ch[i--]);
    }
    return 0;
}
