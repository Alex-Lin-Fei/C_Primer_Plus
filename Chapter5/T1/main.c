#include <stdio.h>
#define HOUR 60

int main() {
    int minutes;

    printf("Enter the time in minutes: ");
    scanf("%d", &minutes);
    while(minutes>0){
        printf("The time is %d h %d mins\n", minutes/HOUR, minutes%HOUR);
        printf("Enter the next time: ");
        scanf("%d", &minutes);
    }
    return 0;
}
