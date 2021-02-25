#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LEN 30

enum spectrum { red, orange, yellow, green, blue, violet};
const char * colors[] = {"red", "orange", "yellow", "green",
                         "blue", "violet"};

int main() {
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    puts("Enter a color (empty line to quit):");
    while (fgets(choice, LEN, stdin) && choice[0] != '\n') {
        for (color = red; color <= violet; color++){
            if (strcmp(choice,colors[color]) == 0){
                color_is_found = true;
                break;
            }
        }
        if (color_is_found)
            switch (color) {

            }
    }
    printf("He"
           "llo, World!\n");
    return 0;
}
