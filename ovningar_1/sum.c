#include <stdio.h>

int  main(void) {

    int number1;
    int number2;


    printf("Skriv in en heltal: ");
    scanf("%d", &number1);

    printf("Skriv en till heltal: ");
    scanf("%d", &number2);

     int sum = number1 + number2;

    printf("Summa av de två heltalen är: %d \n", sum);
    return  0;
}