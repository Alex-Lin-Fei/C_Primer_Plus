#include <stdio.h>

char * reverse(char *);
int main() {
    char ptr[] = "hello world";

    puts(reverse(ptr));
    return 0;
}

char * reverse(char * str) {
    char * res = str;
    char * temp=str;
    while (*temp)
        temp++;
    temp--;
//    int n = temp - str;
//
//    for (int i = 0; i < n; i++){
//        char ch = *(str + n - i - 1);
//        *(str + n - i - 1) = *(str + i);
//        *(str + i) = ch;
//    }

while (temp != str){
    char ch = *str;
        *str = *temp;
        *temp = ch;
        temp--;
        str++;
}
    puts(res);
    return res;
}