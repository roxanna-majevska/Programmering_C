#include <stdio.h>
#include <string.h>

int main (void) {
    // 1. En textlåda (100 tecken) + en räknare count = 0
    char text[100];
    int count = 0;

    // 2. Skriv frågan "Enter a string: "
    // 3. Läs in med fgets, ta bort Enter med strcspn
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;

    // 4. Loopa genom texten tills '\0'
    //      om bokstaven är ' ':
    //          byt den mot '*'
    //          öka count med 1
    for(int  i = 0; text[i] != '\0'; i++){
        if (text[i] == ' ') {
            text[i] = '*';
            count++;            
        }
    }    
    // 5. Skriv ut "Result: …" (den ändrade texten)
    printf("Results: %s\n", text);
 
    // 6. Skriv ut "There are … occurrences of *"
    printf("There are %d occurances of *", count);
    return 0;
}
