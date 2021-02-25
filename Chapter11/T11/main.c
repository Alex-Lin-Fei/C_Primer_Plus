#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

#define LIM 3

int show_choice();

//source_string
void printSourceString(char * [], int n);
void printByASCII(char * [], int n);
void printByLength(char * [], int n);
void printByFirst(char *[], int n);
void s(char *);

int main() {
    int choice;
    char str[LIM][SIZE];
    char * ptr[LIM];

    int i = 0;
    while (i < LIM && fgets(str[i], SIZE, stdin) && str[i][0] != '\n') {
        ptr[i] = str[i];
        i++;
    }

//    for (int j = 0; j < i; j++)
//        fputs(str[j], stdout);
//    printSourceString(str, i);

    do {
        choice = show_choice();
        switch (choice) {
            case 1:
                printSourceString(ptr, i);
                break;
            case 2:
                printByASCII(ptr, i);
                break;
            case 3:
                printByLength(ptr, i);
                break;
            case 4:
                printByFirst(ptr, i);
                break;
            case 5:
            default:
                break;
        }
    } while (choice != 5);
    printf("%d\n", choice);

    return 0;
}


int show_choice(){
    int choice;

    do {
        printf("Please enter your choice: \n");
        printf("1)Print source string list\n");
        printf("2)Print strings in the order in ASCII\n");
        printf("3)Print strings in ascending order of length\n");
        printf("4)Prints a string by the length of the first word in the string \n");
        printf("5)quit\n");
        scanf("%d", &choice);
    }while(choice <1 || choice > 5);

    return choice;
}

void printSourceString(char *str[], int n) {
    for (int i = 0; i < n; i++)
        fputs(str[i], stdout);
    printf("\n");
}

void printByASCII(char * str[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i+1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0){
                char * temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    for (int i = 0; i < n; i++)
        fputs(str[i], stdout);
    putchar('\n');
}

void printByLength(char * str[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i+1; j < n; j++) {
            if (strlen(str[i]) > strlen(str[j])){
                char * temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    for (int i = 0; i < n; i++)
        fputs(str[i], stdout);
    putchar('\n');
}

void printByFirst(char * str[], int n) {
    int len[n];

    for (int i = 0; i < n; i++) {
        char * temp = str[i];
        while(isspace(*temp))
            temp++;
        if (!isspace(*temp))
        {
            char * temp2 = temp;
            while (isalpha(*temp))
                temp++;
            len[i] = temp - temp2;
        }
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = i+1; j < n; j++) {
            if (len[i] > len[j]){
                char * temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    for (int i = 0; i < n; i++)
        fputs(str[i], stdout);
    putchar('\n');

}

