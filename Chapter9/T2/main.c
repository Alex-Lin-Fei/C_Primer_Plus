#include <stdio.h>

void chline(char ch, int i, int j);
int main() {
    char ch;
    int i, j;

    scanf("%c %d %d", &ch, &i, &j);
    chline(ch, i, j);
    return 0;
}
void chline(char ch, int i, int j) {
    for (int r = 0;  r < j; r++){
        for (int c = 0; c < i; c++)
            printf("%c", ch);
        putchar('\n');
    }
}


