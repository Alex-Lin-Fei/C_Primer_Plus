#include <stdio.h>
#include <string.h>
#define MAXAUTL 31
#define MAXTITL 41

struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main() {
    struct book library;

    printf("Please enter the book title.\n");
    gets(library.title);
    printf("Now enter the author.\n");
    gets(library.author);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title,
           library.author, library.value);

    printf("%s: \"%s\" ($%.2f)\n", library.author, library.author, library.value);
    printf("Done.\n");

    return 0;
}
