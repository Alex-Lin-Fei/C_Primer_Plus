#include <stdio.h>

int main() {
    double year_s = 3.156e7;
    int age;
    printf("enter your age: ");
    scanf("%d",&age);

    printf("%e\n",age*year_s);
    return 0;
}
