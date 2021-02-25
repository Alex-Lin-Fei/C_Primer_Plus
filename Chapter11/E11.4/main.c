#include <stdio.h>

int main() {
    char arr[] = "I am a student";
    char * p = "I am a student";

    printf("arr address: %p; \"I am a student\": %p; p: %p\n",
           arr, "I am a student", p);

    arr[0] = 'o';
    printf("arr: %s;\n p: %s\n", arr, p);
    return 0;
}
