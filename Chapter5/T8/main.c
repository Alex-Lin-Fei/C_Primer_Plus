#include <stdio.h>

int main() {
    int mod;
    int operand;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &mod);
    printf("Now enter the first operand: ");
    scanf("%d", &operand);
    while (operand>0){
        printf("%d %% %d is %d\n", operand, mod, operand%mod);
        printf("Now enter the next operand (<= 0 to quit): ");
        scanf("%d", &operand);
    }

    printf("Done!\n");
    return 0;
}
