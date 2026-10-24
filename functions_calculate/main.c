#include <stdio.h>
#include "math_utils.h"
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8); 
    char choice;
    int nrA;
    int nrB;

    while (1) {
        printf("\nVälj en funktion:\n");
        printf("A. Add\n");
        printf("B. Sub\n");
        printf("C. Mul\n");
        printf("D. Div\n");
        printf("E. Pow\n");
        printf("X. Quit\n");
        scanf(" %c", &choice);

        /* med switch 
        switch (choice) {
        case 'X':
        case 'x':
            printf("Quit!\n");
            return 0;    
        default:
            break;
        } */

       // med if sats - kortare
       if (choice == 'X' || choice == 'x') {
            printf("Quit!\n");
            return 0;           
       }

        printf("\nSkriv in första talet:\n");
        scanf("%d", &nrA);
        printf("\nSkriv in andra talet:\n");
        scanf("%d", &nrB);

        switch (choice) {
        
        case 'A':
        case 'a':
            printf("\nResultat: %d\n", add(nrA, nrB));
            break;
        case 'B':
        case 'b':
            printf("\nResultat: %d\n", sub(nrA, nrB));
            break;
        case 'C':
        case 'c':
            printf("\nResultat: %d\n", mul(nrA, nrB));   
            break;
        case 'D':
        case 'd':
            printf("\nResultat: %d\n", divide(nrA, nrB));
            break;
        case 'E':
        case 'e':
            printf("\nResultat: %d\n", power(nrA, nrB));
            break;
        default:
            printf("Fel input!\n");
            break;
        }
    }
        return 0;
}