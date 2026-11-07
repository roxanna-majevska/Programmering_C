#include <stdio.h>
#include <stdlib.h>

typedef struct {int date; float temp;} Measurement;

int main (void) {
    int input;

    printf("Hur många mätningar vill du mata in?\n");
    scanf("%d",&input);

    if (input < 1){
        printf("Du måste välja minst 1!");
        return 1;
    } 

    Measurement *m = malloc(sizeof(Measurement) * input);
    if (m == NULL) {
        printf("Slut på minne!\n");
        return 1;
    }

    for (int i = 0; i < input; i++){
        printf("Skriv in datumet %d: ", i +  1);
        scanf("%d", &m[i].date);

        printf("Skriv in temperaturen %d: ", i + 1);
        scanf("%f",&m[i].temp);
    }
    for(int i = 0; i < input; i++){
        printf("%d %.1f\n",  m[i].date, m[i].temp);
    }
    float largest = m[0].temp;
    float smallest = m[0].temp;
    float sum = 0;
    for (int i = 0; i < input; i++){
        if (m[i].temp > largest){
            largest = m[i].temp;
        }
        if (m[i].temp < smallest){
            smallest = m[i].temp;                     
        }
        sum = sum + m[i].temp;       
    }
    float average = sum / input; 
    printf("Max: %.1f Min: %.1f Medel %.1f\n", largest, smallest, average);  

    free(m);
    return 0;
}