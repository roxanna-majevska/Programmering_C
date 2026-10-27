#include <stdio.h>

int main(void) {
    int number1;
    int number2;
    char answer;

    do {
        printf("Skriv in tal 1: ");
        scanf("%d", &number1);
        printf("Skriv in tal 2: ");
        scanf("%d", &number2);

        int sum = number1 + number2;
        printf("Summan är: %d\n", sum);

        printf("Vill du fortsätta? (Y/N): ");
        scanf(" %c", &answer);

    } while (answer == 'Y' || answer == 'y');
    
    printf("Hej då!");

    /*
    Min första version: 

    printf("Skriv in tal 1: ");
    scanf("%d", &number1);
    printf("Skriv in tal 2: ");
    scanf("%d", &number2);

    int sum = number1 + number2;
    printf("Summan är: %d\n", sum);

    char yes[1] = "Y";
    char no[1] = "N";

    printf("Vill du fortsätta? (Y/N)");
    if (scanf("%s",&yes)){
        printf("Skriv in tal 1: ");
        scanf("%d", &number1);

        printf("Skriv in tal 2: ");
        scanf("%d", &number2);

        int sum = number1 + number2;
        printf("Summan är: %d\n", sum);
    } else {
        (scanf("%s",&no));
        printf("hej då!");
        return 1;   
    } */
    return 0;    
}