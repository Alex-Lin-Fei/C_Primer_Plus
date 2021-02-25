#include <stdio.h>
#include <ctype.h>
#define SIZE 10

long atoi(char * );
int main() {
    char num[SIZE];
    char temp[SIZE];

    gets(num);
//    gets(temp);
char ch = getchar();
    printf("num %s = %ld\n", num, atoi(num));
//    puts(temp);
    putchar(ch);
    return 0;
}


long atoi(char * ptr) {
    int res = 0;
    while (isdigit(*ptr)) {
        res = res * 10 + *ptr - '0';
        ptr++;
    }
    return res;
}