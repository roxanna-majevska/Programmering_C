#include <stdio.h>
#include <windows.h>

int main (void) {

    SetConsoleOutputCP(CP_UTF8);

    char user_input[100];
    
    while (1) {
        printf("Mata in namn, anstuta med '#': ");
        scanf("%s", &user_input);
        if (user_input [0] == '#') {
            printf("Hej då!\n");
            break;
        }
        printf("%s\n", &user_input);

    }

    return 0;
}