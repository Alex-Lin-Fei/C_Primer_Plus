#include <stdio.h>

void pr(char ch, int times, int lines);
int main() {
    char ch;
    int i, j;

    printf("Enter the characters and i, j: ");
    scanf("%c %d %d", &ch, &i, &j);
    pr(ch, i, j);
    return 0;
}
void pr(char ch, int times, int lines) {
    int cols = times / lines + 1;
    int i = 1;
    while (i <= times) {
        putchar(ch);
        if (i%cols == 0)
            putchar('\n');
        i++;
    }
}