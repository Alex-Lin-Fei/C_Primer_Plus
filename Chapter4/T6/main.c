#include <stdio.h>
#include <string.h>

int main() {
    char first_name[10];
    char last_name[10];

    printf("Enter the first name: ");
    scanf("%s", first_name);

    printf("Enter the last name: ");
    scanf("%s", last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", strlen(first_name), strlen(first_name),
            strlen(last_name), strlen(last_name));
    printf("%*d %*d\n", strlen(first_name), strlen(first_name),
           strlen(last_name), strlen(last_name));
    return 0;
}
