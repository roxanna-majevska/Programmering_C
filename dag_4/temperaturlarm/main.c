#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temperature.h"

int main(void) {
    // 1. En textlåda (50 tecken) för inmatningen
    char text[50];

    // 2. Fråga "Temperatur: " och läs med fgets, ta bort Enter med strcspn
    printf("Temperaturen: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;

    // 3. Gör om texten till ett tal med strtol:     (REQ-01)
    char *end;
    long value = strtol(text, &end, 10);

    // 4. Var stannade strtol?                       (REQ-05)
    //      stannade direkt (end == text) ELLER skräp efter (*end != '\0')
    //      → skriv "Fel input" och avsluta (return 1)
    if (end  == text || *end != '\0') {
        printf("Fel input\n");
        return  1;
    }

    // 5. Gör om till int: int temp = (int) value;
    int  temp = (int) value;

    // 6. Om INTE is_valid_temperature(temp)        (REQ-04)
    //      → skriv "Ogiltig temperatur" och avsluta (return 1)
    if (!is_valid_temperature(temp)){
        printf("Ogiltig temperatur");
        return 1;
    }
    // 7. Annars: skriv ut classify_temperature(temp) (REQ-02, REQ-03, REQ-06)
    printf("%s\n", classify_temperature(temp));
    return 0;
}