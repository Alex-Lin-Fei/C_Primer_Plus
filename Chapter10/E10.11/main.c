#include <stdio.h>
#define SIZE 10

int sump(int * start, const int * end);
int main() {
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sump(marbles, marbles+SIZE);
    printf("The total number of marbles is %ld;\n", answer);

    printf("Hello, World!\n");
    return 0;
}

int sump(int * start, const int * end) {
    int tot = 0;

    while (start<end)
        tot+=*start++;
    return tot;
}
