#include <stdio.h>
#include <time.h>

int main(void) {

    time_t nu = time(NULL);
    struct tm *datum  = localtime(&nu);
    int thisYear = datum->tm_year + 1900; 
    int birthYear;
    printf("Skriv in ditt födelseår: ");
    scanf("%d", &birthYear);

    printf("Du är %d gammal.\n",thisYear-birthYear);

    return 0;
}