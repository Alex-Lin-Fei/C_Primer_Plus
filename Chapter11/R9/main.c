#include <stdio.h>

char * s_gets(char * st, int size);
int main() {
    char str[10];
    char str2[3];

    s_gets(str, 10);
    fputs(str, stdout);
    s_gets(str2, 3);
    fputs(str2, stdout);
    return 0;
}


char * s_gets(char * st, int size) {
    char * ret = fgets(st, size, stdin);

    if (ret) {
        while (*st != '\0' && *st != '\n')
            st++;
        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret;
}