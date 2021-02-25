#include <stdio.h>

int main() {
    double Daphne=100;
    double Deirdre=100;

    while (Deirdre<=Daphne) {
        Deirdre *= 1.05;
        Daphne += 100 * 0.1;
    }

    printf("Daphne: %lf; Deirdre: %f\n", Daphne, Deirdre);
    return 0;
}
