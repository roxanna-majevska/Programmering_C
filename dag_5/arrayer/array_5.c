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
    int *date = malloc(sizeof(int) * input);
    if (date == NULL) {
        printf("Slut på minne!\n");
        return 1;
    }
    float *temp = malloc(sizeof(float) * input);
    if (temp == NULL) {
        printf("Slut på minne!\n");
        free(date);
        return 1;
    }
    for (int i = 0; i < input; i++){
        printf("Datum %d: ", i + 1);
        scanf("%d", &date[i]);

        printf("Tempetatur %d: ", i + 1);
        scanf("%f", &temp[i]);
    }
    for (int i = 0; i < input; i++){
    printf("%d %.1f \n", date[i], temp[i]);
    }  
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
    free(date);
    return 0;
}