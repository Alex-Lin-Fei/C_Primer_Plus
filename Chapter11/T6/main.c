#include <stdio.h>
#include <stdbool.h>

bool is_within(char *, char);
int main() {
    char str[10];
    char ch;

    printf("Enter the str and ch: ");
    fgets(str, 10, stdin);
    scanf("%c", &ch);

    if (is_within(str, ch))
        printf("%c is within %s\n",ch, str);
    else
        printf("%c is not within %s\n",ch, str);
    return 0;
}

bool is_within(char * ptr, char ch) {
    while (*ptr && *ptr != ch)
        ptr++;
    if (*ptr)
        return true;
    else
        return false;
}