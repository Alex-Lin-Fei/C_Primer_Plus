#include <stdio.h>

int main() {
    float megabits;
    float filesize;

    printf("Enter the download velocity and file`s size: ");
    scanf("%f %f", &megabits, &filesize);
    printf("At %f megabits per second, a file of %f megabytes downloads in %.2f seconds",
            megabits, filesize, 8*filesize/megabits);
    return 0;
}
