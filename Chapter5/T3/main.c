#include <stdio.h>
#define WEEK_OF_DAY 7

int main() {
    int days;

    printf("Enter the days: ");
    scanf("%d", &days);

    printf("%d days are %d weeks, %d days\n", days, days/WEEK_OF_DAY, days%WEEK_OF_DAY);
    return 0;
}
