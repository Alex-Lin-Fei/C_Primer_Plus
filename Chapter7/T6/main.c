#include <stdio.h>

int main() {
    char ch,prev='#';
    int ei=0;

    while ((ch=getchar())!='#') {
        if (ch == 'i' && prev == 'e')
            ei++;
        prev = ch;
    }
    printf("%d\n", ei);;
    return 0;
}
