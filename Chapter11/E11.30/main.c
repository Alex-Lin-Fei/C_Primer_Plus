#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LIMIT 81

void ToUpper(char *);
int PunctCount(const char * );
int main() {
    char line[LIMIT];
    char * find;

    puts("Please enter a line: ");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');
    if (find)
        *find = '\0';
    ToUpper(line);
    puts(line);
    printf("that line has %d punctuation characters.\n",
           PunctCount(line));

    return 0;
}

void ToUpper(char * str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char * str) {
    int ct = 0;
    while (*str) {
        if (ispunct(*str))
            ct++;
        str++;
    }
    return ct;
}
