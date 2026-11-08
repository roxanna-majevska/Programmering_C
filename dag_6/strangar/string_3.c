#include <stdio.h>
#include <string.h>
#include <ctype.h>   // för toupper

int main (void) {
    // 1. En textlåda (100 tecken) för namnet 
    char text[100];

    // 2. Skriv frågan "Enter a name: "
    // 3. Läs in med fgets, ta bort Enter med strcspn
    printf("Enter a name: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;

    // 4. Gör FÖRSTA bokstaven stor: name[0] = toupper(name[0]);
    text[0] = toupper(text[0]);

    // 5. Loopa genom texten tills '\0'
    //      om bokstaven är ett mellanslag ' ':
    //          gör NÄSTA bokstav (i + 1) stor med toupper
    for (int i = 0; text[i] != '\0'; i++){
        if (text[i] == ' ') {
            text[i + 1] = toupper(text[i + 1]);
        }
    }
    // 6. Skriv ut: Result: "…"
    printf("Result: \"%s\" \n", text);
    return 0;
}

 



