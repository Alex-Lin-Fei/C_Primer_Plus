#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    int sum=0;
    FILE * fp;
    char fname[50];

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp == NULL) {
        printf("Failed to open file. Bye\n");
        exit(1);
    }
    printf("Following are the content:\n");
    while ((ch=getc(fp)) != EOF) {
        putchar(ch);
        sum++;
    }
    fclose(fp);
    printf("\nthere are %d characters\n", sum);


    return 0;
}
