#include <stdio.h>
#include <stdlib.h>

int main (void){
    int input;

    printf("Hur många mätningar ska matas in? \n");
    scanf("%d", &input);

    if(input < 1) {
        printf("Du måste välja minst 1!");
        return 1;
    }
    float *temp = malloc(sizeof(float) * input);
    if (temp == NULL) {
        printf("Slut på minne!\n");
        return 1;
    }
    for (int i = 0; i < input; i++){
        printf("Mätning %d: ", i + 1);
        scanf("%f", &temp[i]);
    }
    printf("Mätningar: ");
    for (int i = 0; i < input; i++){
        printf("%.1f ", temp[i]);
    }
    printf("\n");

    float largest = temp[0];
    float smallest = temp[0];
    float sum = 0;
    for (int i = 0; i < input; i++){
        if (temp[i] > largest){
            largest = temp[i];
        }
        if (temp[i] < smallest){
            smallest = temp[i];                     
        }
        sum = sum + temp[i];       
    }
    float average = sum / input; 
    printf("Max: %.1f Min: %.1f Medel %.1f\n", largest, smallest, average);
    
    free(temp);
    return 0;
}