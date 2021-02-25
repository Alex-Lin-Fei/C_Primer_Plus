#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 20


int main() {
    char str[SIZE];
    int words;
    int uppers;
    int lowers;
    int puncts;
    int digits;
    bool inword=false;
    words = uppers = lowers = puncts = digits = 0;

    gets(str);

    char *ptr  = str;

    while (*ptr) {
        if (isalpha(*ptr) && !inword) {
            inword = true;
            words++;

            if (isupper(*ptr))
                uppers++;
            else
                lowers++;


        } else if (isdigit(*ptr))
            digits++;
        else if (ispunct(*ptr))
            puncts++;
        else
            inword = false;
        ptr++;
    }

    printf("words: %d; uppers: %d; lowers: %d; punctuations: %d; digits: %d\n",
           words, uppers, lowers, puncts, digits);

    return 0;
}
