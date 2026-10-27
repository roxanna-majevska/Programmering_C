#include <stdio.h>

int main(void) {

    int number;
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Skriv in ett tal: ");
        scanf("%d", &number);
        sum = sum + number;
    }   
    printf("Summan av dina tal är: %d\n", sum);
    return 0;
}