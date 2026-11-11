#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>     // toupper 
#include <unistd.h>    // getopt

int main(int argc, char *argv[]) {
    int upper = 0;
    int help = 0;

    // Gå igenom flaggorna en i taget. getopt ger -1 när de är slut
    // "uh" = tillåtna flaggor: -u och -h
    int option;
     while ((option = getopt(argc, argv, "uh")) != -1) {
        if (option == 'u') {
            upper = 1;
        }
        if (option == 'h') {
            help = 1;
        }
    }  
    //  Om -h angavs: visa hjälpen och avsluta (0 = inget fel)                              
    if (help == 1) {
        printf("Användning: %s [-u] [-h] NAMN ÅLDER\n", argv[0]);
        return 0;
    } 
    // optind = första argumentet efter flaggorna
    // Det ska finnas exakt 2 kvar: namn och ålder
    if (argc - optind != 2) {
        printf("Användning: %s [-u] [-h] NAMN ÅLDER\n", argv[0]);
        return 1;        
    }
    // Namnet sitter direkt efter flaggorna
    char *name = argv[optind];
     // Åldern sitter efter namnet. Gör om text till tal
    char *end;
    long age = strtol(argv[optind + 1], &end, 10);
    
    // Inga siffror alls, eller skräp efter siffrorna = fel
    if (end == argv[optind + 1] || *end != '\0') {
        printf("Åldern måste vara ett tal\n");
        return 1;
    }
    // Om -u angavs: gör varje bokstav stor, tills \0 (slutet)
    if (upper == 1) {                              
        for (int i = 0; name[i] != '\0'; i++) {    
            name[i] = toupper(name[i]);   
        }
    }
    printf("%s är %ld år\n", name, age);        


    return 0;
}