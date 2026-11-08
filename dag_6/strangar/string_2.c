#include <stdio.h>
#include <string.h>

int main (void) {
    // 1. En textlåda (100 tecken) för texten
    char longString[100];

     // 2. Skriv frågan "Enter string: "
     // 3. Läs in texten med fgets, ta bort Enter med strcspn
    printf("Enter string: ");
    fgets(longString, sizeof(longString), stdin);
    longString[strcspn(longString, "\n")] = 0;

     // 4. En låda 'pos' som kommer ihåg var 's' hittades.
     //    Starta den på -1 (betyder "inte hittad än")
     int pos  = -1;

     // 5. Loopa genom texten, en bokstav i taget, tills stopptecknet '\0'
     //      om bokstaven är 's':
     //          spara platsen (i) i pos
     //          sluta leta (break)
     for (int i = 0; longString[i] != '\0'; i++){
        if (longString[i] == 's'){
        pos = i;
        break;
        }
    }    
     // 6. Efter loopen:
     //      om pos fortfarande är -1 → skriv "Inget 's' hittades"
     //      annars                   → skriv "Result: position is …"
    
    if ( pos == -1) {
        printf("Nothing 's' finds");
    }else{
    printf("Result: position is %d", pos);
    }

    return 0;
}