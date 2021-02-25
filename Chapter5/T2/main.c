#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    int loop=11;
    while(loop>0) {
        printf("%d ", num++);
        loop--;
    }

    return 0;
}
