#include <stdio.h>
#define LEN 10
#define CSIZE 4
#define NUM 3

struct name {
    char firstname[LEN];
    char lastname[LEN];
};

struct student {
    struct name s_name;
    float scores[NUM];
    float average;
};

void getInformation(struct student[], int);
void computeAverage(struct student [], int);
void printStudent(struct  student[], int);
void printAverage(struct student[], int);
int main() {
    struct student students[CSIZE];
    getInformation(students, CSIZE);


    return 0;
}

void getInformation(struct student s[], int n) {
    for (int i = 0; i < n; i++){
        printf("Input the firstname and lastname: ");
        scanf("%s", s[i].s_name.firstname);
        scanf("%s", s[i].s_name.lastname);
        printf("Input the scores:\n");
        for (int j = 0; j < NUM; j++)
            scanf("%f", &s[i].scores[j]);
    }
}
void computeAverage(struct student s[], int n) {
    for (int i = 0; i < n; i++) {
        float sum = 0;
        for (int j = 0; j < NUM; j++)
            sum+=s[i].scores[j];
        s[i].average = sum / NUM;
    }
}
void printStudent(struct  student s[], int n) {
    printf("Name %15s %s %s average\n", "score1", "score2", "score3");
    for (int i = 0; i < n; i++) {
        printf("%5s%-10s ", s[i].s_name.firstname, s[i].s_name.lastname);
        for (int j = 0; j < NUM; j++)
            printf("%6g", s[i].scores[j]);
        printf("%11.2f\n", s[i].average);
    }
}

void printAverage(struct student s[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += s[i].average;
    }
    printf("The average score of all students is %.2f.\n",
           sum / NUM);
}