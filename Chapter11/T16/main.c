#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 10

void printSource(char *);
void printUpper(char *);
void printLower(char *);
int main() {
    char str[SIZE];
    char ch;

    printf("Enter the choice:\n");
    gets(str);
    scanf("%c", &ch);
    switch (ch) {
        case 'p':printSource(str);break;
        case 'u':printUpper(str);break;
        case 'l':printLower(str);break;
        default:break;
    }

    return 0;
}

void printSource(char * ptr) {
    while (*ptr)
        putchar(*ptr++);
}

void printUpper(char * ptr) {
    while (*ptr)
        putchar(toupper(*ptr++));
}

void printLower(char * ptr) {
    while (*ptr)
        putchar(tolower(*ptr++));
}
