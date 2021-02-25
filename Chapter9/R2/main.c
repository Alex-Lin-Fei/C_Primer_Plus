#include <stdio.h>

void donut(int);
int gear(int, int);
int guess();
void stuff_it(double, double*);
int main() {
    int num;
    double temp;
    double * p = &temp;


    printf("Enter the number of zero: ");
    scanf("%d", &num);
    donut(num);
    printf("%d\n", num);
    stuff_it(num, p);
    printf("num: %d; temp: %f; *p: %f; p: %p", num, temp, *p, p);

    return 0;
}

void donut(int n) {
    while(n--){
        printf("%d", 0);
    }
    printf("\n");
}


void stuff_it(double num, double * p) {
    *p = num;
}



