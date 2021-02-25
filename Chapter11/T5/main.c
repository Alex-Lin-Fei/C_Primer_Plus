#include <stdio.h>

char * strchr(char *, char);
int main() {
    char str[10];
    char ch;

    printf("Enter the string: ");
    fgets(str, 10, stdin);
//    getchar();
    printf("Enter the character:");
    scanf("%c", &ch);
    char * find = strchr(str, ch);

    if (find)
        *find = 'l';
    puts(str);

    return 0;
}

char * strchr(char * string, char ch) {
    while (*string && *string != ch)
        string++;
    if (*string)
        return string;
    else
        return NULL;
}
