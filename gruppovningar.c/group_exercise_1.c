# include <stdio.h>

int main(void){

    int temperature;
    int batteryLevel;

    printf("Ange temperatur i C: ");
    scanf("%d", &temperature);

    printf("Ange batterinivå i  procent: ");
    scanf("%d", &batteryLevel);

    printf("Temperatur: %d C\n", temperature);
    printf("Batterinivå: %d %%\n", batteryLevel);

    if (temperature > 25) {
        printf("Temperaturvarning!\n");
    } else {
        printf("Temperaturen är okej.\n");
    }
    if (batteryLevel < 20) {
        printf("Batterivarning!\n");
    } else {
        printf("Batteriet är okej.\n");
    }

    if (temperature > 25 || batteryLevel < 20) {
        printf("LED: PÅ");
    } else {
        printf("LED: AV");
    }

    return 0;
}
