#include <stdio.h>

int main (void) {
    int number[4];
    

    for (int i = 0; i < 4; i++){
        printf("Skriv in tal %d: ", i + 1);
        scanf("%d", &number[i]);
    }
    int largest = number[0];
    for(int i = 0; i <  4; i++){
        if (number[i] > largest) {
            largest = number[i];
        }
    }   printf("Det största talet är: %d", largest);
    return 0;    
}