#include <stdio.h>

int main(void) {

    int number1;
    int number2;

    printf("Skriv in ett tal: ");
    scanf("%d", &number1);
    printf("Skriv in ett till tal: ");
    scanf("%d", &number2);

    int i = number1 + 1;

    while (i < number2) {
        printf("%d\n", i++); 
    }
return 0;    
}