#include <stdio.h>

int main (void) {
   int hotelNightCost = 2200;
   int night = 3;
   int tolat = hotelNightCost * night;
   

    printf("Vad kostar hotellet per natt? %d\n", hotelNightCost);
    printf("Hur många nätter? %d\n", night);
    printf("Det blir %d\n",  tolat);

     int inputHotelNightCost;
     int inputNight;

    printf("Vad kostar hotell per natt? ");
    scanf("%d", &inputHotelNightCost);
    printf("Hur många nätter? ");
    scanf("%d", &inputNight);

    int inputTotal = inputHotelNightCost * inputNight;
    printf("Det blir %d\n", inputTotal);

    return 0;
}



