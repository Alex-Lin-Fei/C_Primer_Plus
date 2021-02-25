#include <stdio.h>

int main() {
    char letters[26];
    char start = 'a';

    for (int i = 0; i < 26; i++) {
        letters[i] = start++;
        printf("%c ", letters[i]);
    }
    printf("\nDone!\n");

    return 0;
}
