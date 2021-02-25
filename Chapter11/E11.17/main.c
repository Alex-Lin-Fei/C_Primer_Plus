#include <stdio.h>
#include <string.h>

void fit(char *, unsigned int);
int main() {
    char mesg[] = "abcdefg";

    puts(mesg);
    fit(mesg, 3);
    puts(mesg);
    puts("Let`s look at some more of the string.");
    puts(mesg+4);
    return 0;
}

void fit(char * string, unsigned int size) {
    if (strlen(string) > size)
        string[size] = '\0';
}
