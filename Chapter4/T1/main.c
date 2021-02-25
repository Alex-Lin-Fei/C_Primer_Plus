#include <stdio.h>

int main() {
    char first_name[10], last_name[10];

    printf("Enter your first name and last name:");
    scanf("%s %s", first_name, last_name);
    printf("%s,%s\n",first_name,last_name);
    return 0;
}
