#include <stdio.h>

int main() {
    int bph2o = 21;
    int rv;

    rv = printf("%d F is water`s boilin"
                "g point.\n", bph2o);
    printf("The printf() function printe \
     %d characters.\n",
            rv);
    return 0;
}
