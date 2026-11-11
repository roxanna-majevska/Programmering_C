#include <stdio.h>

int main (int argc, char *argv[]) {
    FILE *file = fopen(argv[1], "r");

    if (argc != 2) {
        printf("Användning: %s FILNAMN\n", argv[0]);
        return 1;
    }

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






