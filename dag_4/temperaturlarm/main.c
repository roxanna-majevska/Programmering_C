#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temperature.h"

int main(void) {
    char text[50];   // textlåda för inmatningen
    char *end;       // visar var strtol stannade
    long value;      // talet från strtol

    // VARNINGSGRÄNS                            (REQ-07)
    printf("Välj varningsgräns (0-60): ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;

    value = strtol(text, &end, 10);
    if (end  == text || *end != '\0') {     //  (REQ-05)
        printf("Fel input\n");
        return  1;
    }

    int limit = (int) value;
    if (!is_valid_limit(limit)) {           // (REQ-07)
        printf("Gränsen måste vara 0-60°C\n");
        return 1;
    }    

    // TEMPERATUR                              (REQ-01)
    printf("Temperaturen: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;

    value = strtol(text, &end, 10);
    if (end == text || *end != '\0'){
        printf("Fel input\n");
        return 1;
    }
      
    int temp = (int) value;
    if (!is_valid_temperature(temp)){       //  (REQ-04)
        printf("Ogiltig temperatur");
        return 1;
    }
    // RESULTAT (REQ-02, REQ-03, REQ-06)
    printf("%s\n", classify_temperature(temp, limit));
    return 0;
}