#include <stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define BREAK1 5
#define BREAK2 20
#define FEE1 6.5
#define FEE2 14
#define ADD 0.5
#define DISCOUNT 5.0
#define DISCOUNT_BREAK 100
#define STOP 'q'

int main() {
    double artichokes, all_artichoke;
    double beets, all_beet;
    double carrots, all_carrot;
    char intro;
    double vegetablesCost = 0;
    double allCost = 0;
    double allWeight = 0;
    double freight = 0;
    double discount = 0;

    all_artichoke = all_beet = all_carrot = 0;
    while ((intro = getchar()) != STOP) {
        switch (intro) {
            case 'a': {
                scanf("%lf", &artichokes);
                all_artichoke += artichokes;
            }
                break;
            case 'b': {
                scanf("%lf", &beets);
                all_beet += beets;
            }
                break;
            case 'c': {
                scanf("%lf", &carrots);
                all_carrot += carrots;
            }
                break;
            default:
                printf("The instruction is error.\n");
                break;
        }
    }

    printf("\t\tItem price\tOrder weight\tcost\n");
    printf("Artichoke: %lf\t%lf%lf\n", ARTICHOKE, all_artichoke, all_artichoke * ARTICHOKE);
    printf("     Beet: %lf\t%lf%lf\n", BEET, all_beet, all_beet * BEET);
    printf("   Carrot: %lf\t%lf%lf\n", CARROT, all_carrot, all_carrot * CARROT);
    vegetablesCost = all_carrot * CARROT + all_beet * BEET + all_artichoke * ARTICHOKE;

//    打折
    if (vegetablesCost >= DISCOUNT_BREAK)
        discount = DISCOUNT;
    vegetablesCost = vegetablesCost - vegetablesCost / 100 * 100 + vegetablesCost / 100 * 95;


//    运费
    allWeight = all_artichoke + all_beet + all_carrot;
    if (allWeight <= BREAK1)
        freight = FEE1;
    else if (allWeight <= BREAK2)
        freight = 14;
    else
        freight = 14 + (allWeight - BREAK2) * ADD;

    allCost = freight + vegetablesCost;
    printf("Vegetable Cost: %lf; Discount: %lf; Freight: %lf; All Cost: %lf\n",
           vegetablesCost, discount, freight, allCost);

    return 0;
}
