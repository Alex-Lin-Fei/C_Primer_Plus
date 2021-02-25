#include <stdio.h>

void show(int r,int c,double [r][c], double [r][c]);
void copy(int r, int c, double [r][c], double [r][c]);
int main() {
    double ar1[3][5], ar2[3][5];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            ar1[i][j] = i*j;

    copy(3, 5, ar1, ar2);
    show(3, 5, ar1, ar2);

    return 0;
}

void show(int r,int c,double source[r][c], double target[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0;j < c; j++)
            printf("%f ", source[i][j]);
        putchar('\n');
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0;j < c; j++)
            printf("%f ", target[i][j]);
        putchar('\n');
    }
    printf("\n");
}

void copy(int r,int c,double source[r][c], double target[r][c]) {
    for (int i = 0; i < r; i++)
        for (int j = 0;j < c; j++)
            target[i][j] = source[i][j];
}
