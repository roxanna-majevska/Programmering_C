CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -g
SRC = main.c temperature.c

alarm.exe: $(SRC) temperature.h
	$(CC) $(CFLAGS) $(SRC) -o alarm.exe

clean:
	del /Q *.exe