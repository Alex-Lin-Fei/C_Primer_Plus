#include <stdio.h>
#include <string.h>

char * mystrncpy(char *, const char *, int,int);
int main() {
    char str1[5];
    char str2[20];

    scanf("%s", str2);
    puts(mystrncpy(str1, str2, 10, 5));
    puts(str1);
    puts(str2);


    return 0;
}

char * mystrncpy(char * target, const char * source, int n,int l) {
    int i = 0;
    char * p = target;
    n = n>=l? l-1: n;
    while (*source && i < n) {
        *target++ = *source++;
        i++;
    }
//    if (i == n)
//        target[i-1] = '\0';
//    else
//        target[i] = '\0';
//    printf("%d\n", i);
//target[n-1]='\0';
    return p;
}


//char * mystrncpy(char *dest, const char * source, int n) {
//    char * start = dest;
//    while (n && (*dest++ = *source++))
//        n--;
//    if (n)
//        while (--n)
//            *dest++ = '\0';
//    return start;
//}