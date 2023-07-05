#include <stdio.h>
#include <math.h>
int main() {
    int unit;
        float amt, total, charge;

        printf("Enter total units consumed: ");
        scanf("%d", &unit);

        if(unit <= 50)
        {
            amt = unit * 0.50;
        }
        else if(unit <= 150)
        {
            amt = 25 + ((unit-50) * 0.75);
        }
        else if(unit <= 250)
        {
            amt = 100 + ((unit-150) * 1.20);
        }
        else
        {
            amt = 220 + ((unit-250) * 1.50);
        }

        charge = amt * 0.20;
        total  = amt + charge;

        printf("\nElectricity Bill = Rs. %f\n\n", total);
    return 0;
}
