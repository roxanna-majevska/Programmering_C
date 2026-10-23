#include <stdio.h>

int main(void) {

    int amount;
    int remaining;

    printf("Ange belopp: ");
    scanf("%d", &amount);

    remaining = amount;

    int bill1000 = remaining / 1000;
    remaining = remaining % 1000;

    int bill500 = remaining / 500;
    remaining = remaining % 500;

    int bill200 = remaining / 200;
    remaining =  remaining % 200;

    int bill100 = remaining / 100;
    remaining = remaining % 100;

    int bill50 = remaining / 50;
    remaining = remaining % 50;

    int bill20 = remaining / 20;
    remaining = remaining % 20;

    int coin10 = remaining / 10;
    remaining = remaining % 10;
    
    int coin1 = remaining / 1;

    if(bill1000 > 0) {
        printf("1000-lappar: %d\n", bill1000);
    } 
    if(bill500 > 0) {
        printf("500-lappar: %d\n", bill500);
    }
    if (bill200 > 0) {
        printf("200-lappar: %d\n", bill200);    
    } 
    if(bill100 > 0) {
        printf("100-lappar: %d\n", bill100);
    } 
    if(bill50 > 0) {
        printf("50-lappar: %d\n", bill50);
    } 
    if(bill20 > 0) {
        printf("20-lappar: %d\n", bill20);
    } 
    if(coin10 > 0) {
        printf("10-kronor: %d\n", coin10);
    } 
    if(coin1 > 0) {
        printf("1-kronor: %d\n", coin1);
    } 
    return 0;
}