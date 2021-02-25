#include <stdio.h>

int main() {
    int start = 5;

    for (int i = 1; start<= 150;i++){
        start -= i;
        start *= 2;
        printf("%d week: %d friend(s)\n", i, start);
    }

    return 0;
}
