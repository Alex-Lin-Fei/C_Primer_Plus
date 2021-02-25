#include <stdio.h>

int main() {
    char ch;
    int sum=0;

    while ((ch=getchar())!='#') {
        if (ch == '.') {
            putchar('!');
            sum++;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            sum++;
        } else
            putchar(ch);
    }
    printf("%d\n",sum);

    return 0;
}
