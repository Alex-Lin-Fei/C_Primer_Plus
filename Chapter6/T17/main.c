#include <stdio.h>

int main() {
    double dollar=100;
    int count=0;
    while (dollar > 0) {
        if (dollar <= 10)
            dollar=0;
        else
            dollar -= 10;
        dollar *= 1.08;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
