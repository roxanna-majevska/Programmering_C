#include <stdio.h>
#include <string.h>
#include  <ctype.h>    // för tolower

int main (void) {

    // 1. Två textlådor (200 tecken): thetext och clean  
    char theText[200];
    char clean[200];

    // 2. Skriv frågan "Enter text: "
    // 3. Läs in thetext med fgets, ta bort Enter med strcspn
    printf("Enter a palindrome: ");
    fgets(theText, sizeof(theText), stdin);
    theText[strcspn(theText, "\n")] = 0;

    // 4. Bygg clean: loopa genom thetext
    //      om bokstaven INTE är ett mellanslag:
    //          lägg tolower(bokstaven) i clean[j], öka j
    //    efter loopen: clean[j] = '\0'  (stopptecken!)
    int j = 0;
    for (int i = 0; theText[i] != '\0'; i++){
        if (theText[i] != ' ') {
            clean[j] = tolower(theText[i]);
            j++;
        }        
    }
    clean[j] = '\0';
    printf("Clean: %s\n", clean);

    // 5. Jämför från båda hållen:
    //      vänster = 0, höger = strlen(clean) - 1
    //      så länge vänster < höger:
    //          olika bokstäver? → inte palindrom, sluta
    //          vänster++, höger--
    int left = 0;
    int right = strlen(clean) -1;
    int isPalindrom = 1;

    while (left < right){
        if (clean[left] != clean[right]){
            isPalindrom = 0;
            break;
        }    
    left++;
    right--;
    }
    // 6. Skriv ut "palindrom" eller "inte palindrom"
    if (isPalindrom == 1){
        printf("palindrom\n");
    }else{
        printf("not palindrom");
    }
    return 0;
}    