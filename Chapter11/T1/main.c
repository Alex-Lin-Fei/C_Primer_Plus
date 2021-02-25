#include <stdio.h>
#define SIZE 10

void store(char [], int);
int main() {
    char chs[SIZE];
    char s[SIZE];

    store(chs, SIZE);
    store(s, SIZE);
    printf("string: %s %s\n", chs,s);
    return 0;
}

void store(char str[], int n) {
    char ch;
    int i=0;
    while (i<n) {
        str[i++] = getchar();
    }
    str[n-1] = '\0';
//    while ((ch = getchar()) != '\n')
//        continue;
}
