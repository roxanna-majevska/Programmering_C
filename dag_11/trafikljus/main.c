#include <avr/io.h>
#include <util/delay.h>

// vilket stift varje lampa sitter på (port B)
#define RED PB4    // stift 12
#define YELLOW PB3 // stift 11
#define GREEN PB2  // stift 10

int main(void)
{
    // stiften görs till utgångar
    DDRB |= (1 << RED);
    DDRB |= (1 << YELLOW);
    DDRB |= (1 << GREEN);

    while (1)
    {
        // tänd GRÖN, släck GUL
        PORTB |= (1 << GREEN);    // tänd
        PORTB &= ~(1 << YELLOW);  // släck
        _delay_ms(1000);

        // släck GRÖN, tänd GUL
        PORTB &= ~(1 << GREEN);
        PORTB |= (1 << YELLOW);
        _delay_ms(1000);

        // släck GUL, tänd RÖD
        PORTB &= ~(1 << YELLOW);
        PORTB |= (1  << RED);
        _delay_ms(1000);

        // släck RÖD, tänd GUL
        PORTB &= ~(1 << RED);
        PORTB |= (1 << YELLOW);
        _delay_ms(1000);
    }
}