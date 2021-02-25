#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int sumUpper = 0;
    int sumLower = 0;

    while ((ch = getchar()) != EOF) {
        if (isupper(ch))
            sumUpper++;
        else if (islower(ch))
            sumLower++;
    }
    printf("Upper: %d; Lower: %d\n", sumUpper, sumLower);
    return 0;
}
