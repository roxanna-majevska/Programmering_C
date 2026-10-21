#include <stdio.h>

int main (void) {
    printf("Innan loopen\n");

    int i = 0; 
    while (1) {
        printf("Loop start\n");
        if (i++ == 4) {
            continue;
        }
        if ( i == 10 ) {
            break;
        }printf("i: %d\n, i");
        /* code */
    }
    return 0;
    
}