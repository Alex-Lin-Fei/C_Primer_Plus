#include <stdio.h>

int main() {
    int arrays[8];

    for (int i = 0; i < 8; i++)
        scanf("%d", &arrays[i]);

    for (int i = 7; i >= 0; i--)
        printf("%d ", arrays[i]);
    printf("\n");
    return 0;
}
