calc.exe: main.c math_utils.c math_utils.h
	gcc -std=c11 -Wall -Wextra -Wpedantic -g main.c math_utils.c -o calc.exe

run: calc.exe
	.\calc.exe

clean:
	del /Q calc.exe

.PHONY: run clean

# varianten med variabler - svårare att läsa, men enklare att modifiera

#CC = gcc
#CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -g
#TARGET = calc.exe
#SOURCES = main.c math_utils.c

#$(TARGET): $(SOURCES) math_utils.h
#	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

#run: $(TARGET)
#	./$(TARGET)

#clean:
#	rm -f $(TARGET)

#.PHONY: run clean 