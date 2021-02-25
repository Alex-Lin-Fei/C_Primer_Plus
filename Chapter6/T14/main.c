#include <stdio.h>

int main() {
    double num1[8], num2[8];

    printf("Enter the items of num1: ");
    for (int i = 0; i < 8; i++)
        scanf("%lf", &num1[i]);
    num2[0]=num1[0];
    for (int i = 1; i < 8; i++)
        num2[i]=num2[i-1]+num1[i];
    int i = 0;
    do{
        printf("%3.2lf ", num1[i++]);
    }while(i<8);
    printf("\n");
    i=-1;
    while (++i<8)
        printf("%3.2lf ", num2[i]);
    printf("\n");

    return 0;
}
