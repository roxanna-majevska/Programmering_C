# include <stdio.h>

int main(void) {

    int minutes;

    printf("Ange minuter: ");
    scanf("%d", &minutes);

    int equalsHours = minutes / 60;
    int equalsMinutes = minutes % 60;

    printf("Det mot svarar: \nTimmar: %d\nMinuter: %d\n", equalsHours, equalsMinutes);

    return 0;
}