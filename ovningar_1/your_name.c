#include <stdio.h>
#include <string.h>

int main(void){
    char foreName[20];
    char lastName[20];

    printf("Skriv in ditt förnamn: ");
    fgets(foreName, sizeof(foreName), stdin);
    foreName[strcspn(foreName,"\n")] = '\0';

    printf("Skriv in ditt efternamn: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = '\0';

    printf("Du heter: %s, %s.", lastName, foreName);
    return 0;

}