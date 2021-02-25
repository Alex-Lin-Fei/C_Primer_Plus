#include <stdio.h>
#define STLEN 14

int main() {
    char words[STLEN];

    puts("Enter a string:");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);

    puts("Enter another string:");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    printf("Done\n");
    return 0;
}
