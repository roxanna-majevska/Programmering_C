# include <stdio.h>

int main(void) {

    float amount;

    printf("Ange belopp: ");
    scanf("%f", &amount);

    float amountWithVat  = amount + (amount * 0.25);
    printf("Med moms: %.2f kronor\n", amountWithVat);

    return 0;
}