#include <stdio.h>
#include <ctype.h>
#define SIZE 20

char * deleteBlank(char *);
int main() {
    char str[SIZE];

    while (fgets(str, SIZE, stdin) && str[0] != '\n') {
        puts(deleteBlank(str));
    }
    return 0;
}

char * deleteBlank(char * ptr) {
    char * res = ptr;
    char * ans = res;

    while (*ptr && *ptr != '\n') {
        if (isblank(*ptr))
            ptr++;
        else
            *res++ = *ptr++;
    }
    *res = '\0';
    return ans;
}
