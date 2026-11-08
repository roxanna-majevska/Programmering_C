#include <stdio.h>
#include <string.h>

int main (void) {

    // 1. En textlåda (100 tecken) för e-postadressen
    char email[100];

    // 2. Skriv frågan "Enter email: "
    // 3. Läs in med fgets, ta bort Enter med strcspn
    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = 0;

    // 4. Finns det ett '@'?  at = strchr(email, '@')   (NULL = finns inte)
    char *at = strchr(email, '@');
    // 5. Var är SISTA punkten?  dot = strrchr(email, '.')   (NULL = finns inte)
    char *dot = strrchr(email, '.');

    // 6. Hur många tecken efter punkten?  strlen(dot + 1)
    // 7. Giltig om: at inte är NULL OCH dot inte är NULL
    //               OCH längden är 2 eller 3
    //      → skriv "valid" eller "not valid"
    if (at != NULL && dot != NULL){
        int len = strlen(dot + 1);
        if (len == 2 || len == 3){
            printf("valid\n");
        }else{
            printf("not valid\n");
        }
    }else{
        printf("not valid\n");
    }
    return 0;
}