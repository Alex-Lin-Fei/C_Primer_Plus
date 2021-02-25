#include <stdio.h>

int main() {
    int nums[8];
    int i;


    nums[0] = 2;
    for (i = 1; i < 8; i++)
        nums[i] = nums[i-1]*2;
    i=0;
    do{
        printf("%d ", nums[i]);
    }while(++i<8);
    printf("\n");

    return 0;
}
