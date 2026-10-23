#include <stdio.h>

int main(void) {

    int number1;
    int number2;

    printf("Skriv in ett heltal: ");
    scanf("%d", &number1);
    printf("Skriv in det andra heltalet: ");
    scanf("%d", &number2);

    float average = (number1 + number2) / 2.0;
    int sum = number1 + number2;
    int difference = number1 - number2;

    printf("Medelvärdet av de två heltalen är: %.1f\n", average);
    printf("Summan av de två heltalen är: %d\n",  sum);
    printf("Differensen av de två heltalen är: %d\n", difference);

    return 0;
}