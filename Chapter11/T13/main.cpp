#include <iostream>

void reverseEachWord(char *);
int main() {
    char str[10];

    gets(str);
    reverseEachWord(str);

    return 0;
}

void reverseEachWord(char * ptr) {
    char *end = ptr;

    while (*end) {
        while(isspace(*end))
            end++;
        char * start = end;
        while (isalpha(*(end+1)))
            end++;
        char * temp = end+1;
        while (end != start)
        {
            char t = *end;
            *end = * start;
            *start = t;
            start++;
            end--;
        }
        end = temp;
    }
    puts(ptr);
}
