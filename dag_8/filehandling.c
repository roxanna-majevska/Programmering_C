#include <stdio.h>

int main (void) {
    FILE *file = fopen("name.txt", "r");
        
    if (file == NULL){
        printf("Kunde inte öppna filen\n");
        return 1;
    }    

    char line[100];  
    int nr = 1;                        
    
    while (fgets(line, sizeof(line), file) != NULL) {    
        printf("%d: %s", nr, line);
        nr++;
    }

    fclose(file);
    return 0;
}

