#include <stdio.h>

int main() {
    int digit;
    int odds=0;
    int evens=0;
    int sumOdds=0;
    int sumEvens=0;

    while (scanf("%d", &digit) && digit != 0) {
        if (digit % 2) {
            odds+=1;
            sumOdds+=digit;
        }

        else{
            evens+=1;
            sumEvens+=digit;
        }
    }
    printf("evens: %d; avgevens: %f; odds: %d; avgodds: %f\n",
            evens, 1.0*sumEvens/evens, odds, 1.0*sumOdds/odds);
    return 0;
}
