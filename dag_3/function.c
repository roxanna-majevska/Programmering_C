#include <stdio.h>

void function(int, int[], char[]); // deklaration
void function2(void) {
     //Deklaration  och definion i ett. måste ske ovanför platsen vi gör funktionsanropet
     printf("Hej från funktion 2!\n"); 
     return;
}

int main(void) {
    int a = 20;
    int ar[5] = {10, 20, 30, 40, 50};
    char str[30] = "greeksforgeeks";
    function(a, &ar[0], &str[0]);   // anrop
    function2();
    return 0;
}

/*
Detta är okej om funktion3 är en hjälpfunktion till funktion och
inte används på andra ställen i programmet.
Om funktion3 ska användas av flera funktioner bör den hellre deklareras högst upp
*/
void function3(void) {
    printf("Hej från funktion 3!\n");
}
void function(int a, int* ar, char* str) {  //definition
    int i;
    function3();

}


 