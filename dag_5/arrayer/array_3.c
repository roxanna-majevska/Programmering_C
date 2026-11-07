#include <stdio.h>

int main (void) {

    int number[5] = {3, 5, 4, 8, 9};

    printf("Talet före: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", number[i]);
    }
    printf("\n");    
    
    for(int i = 0; i < 5; i++){
        if (number[i] % 2 != 0){
        number[i] = 0;
        }
    }    
    printf("Talet efter: ");  
    for( int i = 0; i < 5; i++){
        printf("%d ", number[i]);    
    } 
    printf("\n");
      
    return 0;
}