#include <stdio.h>
#include <mem.h>

struct Month{
    char name[10];
    char abbname[3];
    int days;
    int number;
};

struct Month year[] = {
        {"January", "Jan", 31, 1},
        {"February", "Feb", 28, 2},
        {"March", "Mar", 31, 3},
        {"April", "Apr", 30, 4},
        {"May", "May", 31, 5},
        {"June", "Jun", 30, 6},
        {"July", "Jul", 31, 7},
        {"August", "Aug", 31, 8},
        {"September", "Sep", 30, 9},
        {"October", "Oct", 31, 10},
        {"November", "Nov", 30, 11},
        {"December", "Dec", 31, 12}
};

int sumDaysI(int);
int sumDaysII(char *);
int main() {
    int day;
    int year;
    char mon[10];

    printf("Enter the year, month and day:");
    scanf("%d", &year);
    scanf("%s", mon);
    scanf("%d", &day);
    printf("%d year, %s month, %d day:%d\n",
           year, mon, day, sumDaysII(mon) + day);
    return 0;
}


int sumDaysI(int n) {
    int res=0;
    for (int i = 0; i < n; i++)
        res += year[i].days;
    return res;
}
int sumDaysII(char * mon) {
    int res=0;
    for (int i = 0; i < 12; i++)
    {
        if (!(strcmp(mon, year[i].abbname)  * strcmp(mon, year[i].name)))
            break;
        res+=year[i].days;
    }
    return res;
}

