#include <stdio.h>

char * string_in(char *, char *);
int main() {

    puts(string_in("hats", "at"));
    return 0;
}

char * string_in(char * str1, char * str2) {
    while (*str1) {
        char *p = str1;
        char * temp = str2;

        while (*temp && *str1 == *temp)
        {
         str1++;
         temp++;
        }
        if (*temp != '\0')
            str1++;
        else
            return p;
    }
     return "NULL";
}
