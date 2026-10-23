#include <stdio.h>

int main(void) {

    int number1;
    int number2;

    printf("Skriv in ett nummer: ");
    scanf("%d", &number1);
    printf("Skriv in ett till nummer: ");
    scanf("%d", &number2);

    for(int i = number1 + 1; i < number2; i++){
        printf("%d\n", i);
    }
return  0;    
}