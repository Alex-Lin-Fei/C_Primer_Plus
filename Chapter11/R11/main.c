#include <stdio.h>
#include <mem.h>

char * s_gets(char * st, int size);
int main() {
    printf("Hello, World!\n");
    return 0;
}

char * s_gets(char * st, int size) {
    char * ret = fgets(st, size, stdin);

    if (ret) {
        char * find = strchr(st, '\n');
        if (find)
            *find = '\0';
        while (getchar() != '\n')
            continue;
    }
    return ret;
}
