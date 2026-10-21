#include <stdio.h>

int main (void) {
    // skriv ut när det är jämt
    for ( int i = 0; i < 50; i++) {
        if (i % 2 == 1) {
            continue;
        }
        printf("i: %d\n", i);
    }
    return 0;
}