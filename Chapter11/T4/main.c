#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 10
void readWord(char [], int);
int main() {
    char word[SIZE];

    readWord(word, SIZE);
    printf("%s\n", word);
    return 0;
}
void readWord(char word[], int n) {
    char ch;
    int i = 0;
    bool flag = false;
    while ((ch = getchar()) && i < n) {
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
    word[n-1] = '\0';
}
