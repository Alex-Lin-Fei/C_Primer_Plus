#include <stdio.h>

int main() {
    char ch = 'A';

    for (int i = 0; i < 5; i++) {
        for (int l = 0; l < 5-1-i; l++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%c", ch+j);
        for (int k = i-1; k>=0; k--)
            printf("%c", ch+k);
        printf("\n");
    }

    return 0;
}
