#include <stdio.h>

void show();
int getInput(int low, int high);
int main() {
    int input;
    input = getInput(1, 4);
    printf("%d\n", input);
    return 0;
}

void show() {
    printf("Please choose one of the following.\n");
    printf("1) copy files\t\t2) move files\n");
    printf("3) remove files\t\t4) quit\n");
    printf("Enter the number of your choice.\n");
}

int getInput(int low, int high) {
    int input;
    show();
    scanf("%d", &input);
    while (input < low || input > high) {
        show();
        scanf("%d", &input);
    }
    return input;
}

