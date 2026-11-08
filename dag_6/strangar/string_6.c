#include <stdio.h>
#include <string.h>

int main (void) {
    // 1. En textlåda (200 tecken) + en räknare spaces = 0
    char text[200];
    int spaces = 0;

    // 2. Skriv frågan "Enter text: "
    // 3. Läs in med fgets, ta bort Enter med strcspn
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;

    // 4. Loopa genom texten tills '\0'
    //      om bokstaven är ' ': öka spaces med 1
    for (int i = 0; text[i]  != '\0'; i++){
        if (text[i] == ' ') {
        spaces++;
        }
    }
    // 5. Antal ord = spaces + 1
    //      (om texten är tom, strlen == 0 → 0 ord)
    int words = spaces + 1;
    if (strlen(text) == 0) {
        words = 0;
    }
    // 6. Skriv ut "Words: …"
    printf("Words: %d\n",words);

    return 0;
}    
