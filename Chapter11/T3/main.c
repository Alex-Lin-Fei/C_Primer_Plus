#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 30
void readWord(char []);
int main() {
    char word[SIZE];

    readWord(word);
    printf("%s\n", word);
    return 0;
}
void readWord(char word[]) {
    char ch;
    int i = 0;
    bool flag = false;
    while ((ch = getchar())) {
        if (isspace(ch)) {
            if (!flag)
                continue;
            else{
                word[i] = '\0';
                return;
            }

        }
        if (isalpha(ch))
            flag = true;
        word[i++] = ch;
    }
}
