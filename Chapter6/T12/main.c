#include <stdio.h>

int main() {
    double sum1 = 0;
    double sum2 = 0;
    int limit, sign;

    printf("Enter the items: ");
    while(scanf("%d", &limit) == 1) {
        for (int i = 1, sign = 1; i <= limit; i++, sign *= -1) {
            sum1 += 1.0 / i;
            sum2 += 1.0 * sign / i;
        }
        printf("%d: %lf %lf\n", limit, sum1, sum2);
    }
    return 0;
}
