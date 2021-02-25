#include <stdio.h>
#define MAX 20

int main() {
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts("Enter your first name: ");
    fgets(first, MAX, stdin);
    puts("Enter your last name: ");
    fgets(last, MAX, stdin);
    puts("Enter your prize money: ");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
    puts(formal);

    return 0;
}
