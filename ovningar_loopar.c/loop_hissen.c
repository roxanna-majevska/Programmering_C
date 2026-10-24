#include <stdio.h>

int main(void)
{

    int liftButton;

    while (1)
    {
        printf("\n=== HISSEN ===\n");
        printf("1. Våning 1\n");
        printf("2. Våning 2\n");
        printf("3. Våning 3\n");
        printf("0. Gå ut ur hissen.\n");
        printf("\nVälj en knap: ");
        scanf("%d", &liftButton);

        switch (liftButton)
        {
        case 1:
            printf("Du är på våning 1\n");
            break;
        case 2:
            printf("Du är på våning 2\n");
            break;
        case 3:
            printf("Du är på våning 3\n");
            break;
        case 0:
            printf("Hej då!\n");
            return 0;
        default:
            printf("Den knappen finns inte!\n");
            break;
        }
    }
    return 0;
}