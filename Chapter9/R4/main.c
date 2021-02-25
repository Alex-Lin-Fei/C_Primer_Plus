#include <stdio.h>

int sum(int, int);
int main() {
    int n1, n2;


    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("%d + %d = %d\n", n1, n2, sum(n1,n2));
    return 0;
}

int sum(int a, int b) { return a + b; }
