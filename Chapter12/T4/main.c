#include <stdio.h>
#define LEN 10

struct Name {
    char firstname[LEN];
    char middlename[LEN];
    char lastname[LEN];
};

struct Insurance {
    char number[LEN];
    struct Name name;
};

int main() {

    return 0;
}
