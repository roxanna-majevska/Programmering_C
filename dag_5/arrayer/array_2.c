#include <stdio.h>
#include <stdlib.h>

int main (void){
    int input;

    printf("Hur många tal vill du mata in? \n");
    scanf("%d", &input);

    if (input < 1){
        printf("Du måste välja minst 1!");
        return 1;
    } 
    int *number = malloc(sizeof(int) * input );
    if (number == NULL){
        printf("Slut på minne!\n");
        return 1;
    }

    for (int i = 0; i < input; i++){
        printf("Skriv in tal %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    int largest = number[0];
    for(int i = 0; i < input; i++){
        if (number[i] > largest) {
            largest = number[i];
        }
    }   printf("Det största talet är: %d", largest);
    free(number);
    return 0;    
}


/*#include <stdio.h>

int main (void) {
    int number[100];
    int input;

    printf("Hur många tal vill du mata in? \n");   
    scanf("%d", &input); 

    if(input < 1 || input > 100){
        printf("Du måste välja mellan 1 och 100 \n");
        return 1;
    }

    for (int i = 0; i < input; i++){
        printf("Skriv in tal %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    int largest = number[0];
    for(int i = 0; i < input; i++){
        if (number[i] > largest) {
            largest = number[i];
        }
    }   printf("Det största talet är: %d", largest);
    return 0;    
}*/