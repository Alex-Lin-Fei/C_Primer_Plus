#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""

void stsrt(char * strings [], int num);
char *s_gets(char *st, int n);
int main() {
    char input[LIM][SIZE];
    char * ptstr[LIM];
    int cnt = 0;
    int k;

    printf("Input up to %d lines, and I will sort them.\n",
           LIM);
    printf("To stop, press the Enter key at a line`s start.\n");

    while (cnt < LIM && s_gets(input[cnt], SIZE) != NULL
    && input[cnt][0] != '\0') {
        ptstr[cnt] = input[cnt];
        cnt++;
    }
    stsrt(ptstr, cnt);
    puts("\nHere`s the sorted list:\n");
    for (k = 0; k < cnt; k++)
        puts(ptstr[k]);

    for (k = 0; k < cnt; k++)
        puts(input[k]);

    return 0;
}

void stsrt(char * strings [], int num) {
    for (int i = 0; i < num-1; i++)
        for (int j = i+1; j < num; j++)
            if (strcmp(strings[i], strings[j]) > 0)
            {
                char * temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
}

char *s_gets(char *st, int n) {
    char * ret = fgets(st, n, stdin);

    int i = 0;
    if (ret) {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret;
}
