# Bygger blink-programmet för Arduino Uno (ATmega328P)

CC      = "C:\avr\bin\avr-gcc"
OBJCOPY = "C:\avr\bin\avr-objcopy"
AVRSIZE = "C:\avr\bin\avr-size"
OBJISP  = "C:\avr\bin\avrdude"
PORT   ?= COM3

MCU   = atmega328p
F_CPU = 16000000UL

CFLAGS  = -Wall -Wextra -Wundef -pedantic -Os -std=c11 -DF_CPU=$(F_CPU) -mmcu=$(MCU)
LDFLAGS = -mmcu=$(MCU) -Wl,--gc-sections

TARGET  = program
SOURCES = main.c
OBJS    = $(SOURCES:.c=.o)

all: $(TARGET).hex

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET).elf: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^
	$(AVRSIZE) $@

$(TARGET).hex: $(TARGET).elf
	$(OBJCOPY) -O ihex -R .eeprom $< $@

# flasha till en riktig Arduino Uno via USB
isp: $(TARGET).hex
	$(OBJISP) -F -V -c arduino -p $(MCU) -P $(PORT) -U flash:w:$<

clean:
	del /Q *.hex *.elf *.o 2>nul || exit 0

.PHONY: all isp clean