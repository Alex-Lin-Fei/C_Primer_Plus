#include <stdio.h>
#include <string.h>

int main() {
    char first_name[10], last_name[10];

    printf("Enter your last name and first name: ");
    scanf("%s %s", first_name, last_name);
    printf("\"%s %s\"\n", last_name, first_name);

    printf("\"%*s %s\"\n", 20 - strlen(first_name) - 1, last_name, first_name);
    printf("\"%-s %-*s\"\n", last_name, 20 - strlen(last_name) - 1, first_name);
    printf("\"%*s %s\"\n", strlen(last_name) + 3, last_name,first_name);


    return 0;
}