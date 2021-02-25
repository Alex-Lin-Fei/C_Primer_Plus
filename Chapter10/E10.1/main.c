#include <stdio.h>
#define MONTH 12

int main() {
    int days[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < MONTH; i++)
        printf("Month %2d has %2d days.\n", i+1, days[i]);
    return 0;
}
