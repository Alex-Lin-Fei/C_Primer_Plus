#include <stdio.h>
#include <stdlib.h>
#define LIM 30


int main() {
    char number[LIM];
    char * end;
    long value;

    puts("Enter a number (empty line to quit):\n");
    while (fgets(number, LIM, stdin) && number[0] != '\n') {
        value = strtol(number, &end, 10);
        printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n",
               value, end, *end);
        value = strtol(number, &end, 16);
        printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n",
               value, end, *end);
        puts("Next number:");

    }
    printf("Bye!\n");
    return 0;
}
