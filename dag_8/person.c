#include <stdio.h>
#include <stdlib.h> //strtol och atoi (text till tal) 


// argc = hur många ord som skrevs (programnamnet räknas också) 
// argv = array med orden som text, argv[0] är programmets namn 
int main(int argc, char *argv[]) {

    // Kontrollera att exakt 3 ord skrevs: programnamn + namn + ålder
    if (argc != 3) {
        printf("Användning: %s ÅLDER\n", argv[0]);
        // Fel antal → visa bruksanvisning med programmets eget namn (argv[0])
        return 1; // 1=avsluta med felkod
    }
    // Namnet ligger på säte 1. Ge det en egen etikett så koden blir lättläst
    char *name = argv[1];

    // atoi ger 0 vid text som "abc" utan att säga till, därför strtol istället
    // int age = atoi(argv[2]);

    char *end;
    // end pekar sedan på första tecknet som INTE kunde läsas som en siffra

    // Gör om texten på säte 2 (t.ex. "39") till talet 39, i tiosystemet (10)
    long age = strtol(argv[2], &end, 10);

    // end == argv[2]  → inga siffror alls lästes (t.ex. "abc")
    // *end != '\0'    → det finns skräp efter siffrorna (t.ex. "39abc")
    if (end == argv[2] || *end != '\0') {
        printf("Åldern måste vara ett tal\n");
        return 1;
    }

    printf("%s är %ld år\n", name, age);
    return 0;
}

   
 

