#include <stdio.h>

void input(double [][5], int);
void averageByGroup(double [][5],double [], int);
double average(double [], int);
double findMax(double [][5], int);
void output(double [], int);

int main() {
    double arr[3][5], avg[3];

    input(arr, 3);
    printf("arr`s content: \n");
    for (int i = 0; i < 3; i++)
        output(arr[i], 5);


    printf("\navg`s content:\n");
    averageByGroup(arr, avg, 3);
    output(avg, 3);

    printf("average: %lf; maximum: %lf\n", average(avg, 3),
           findMax(arr, 3));



    return 0;
}


void input(double arr[][5], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            scanf("%lf", &arr[i][j]);
}


void averageByGroup(double arr[][5], double avg[], int n) {
    for (int i = 0; i < n; i++)
        avg[i] = average(arr[i], 5);
}

double average(double arr[], int n) {
    double avg = 0;
    for (int i = 0; i < n; i++)
        avg += arr[i];
    return avg / n;
}

double findMax(double arr[][5], int n) {
    int res = arr[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            if (res < arr[i][j])
                res = arr[i][j];
    return res;
}

void output(double arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%4.1lf ", arr[i]);
    printf("\n");
}