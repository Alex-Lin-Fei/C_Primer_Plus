#include <stdio.h>

void add(int [], int [], int [], int);
int main() {
    int s1[5], s2[5], s3[5];

    for (int i = 1; i <= 5; i++) {
        s1[i - 1] = i;
        s2[i - 1] = 2 * i;
    }
    add(s1, s2, s3, 5);
    for (int i = 0; i < 5; i++) {
        printf("s1[%d] = %d  ", i, s1[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("s2[%d] = %d  ", i, s2[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("s3[%d] = %d  ", i, s3[i]);
    }

    printf("\n");

    return 0;
}

void add(int source1[], int source2[], int target[], int n) {
    for (int i = 0; i < n; i++)
        *target++= *source1++ + *source2++;
}
