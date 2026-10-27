prog.exe: main.c maths.c incr.c maths.h incr.h
	gcc -std=c11 -Wall -Wextra -Wpedantic -g main.c maths.c incr.c -o prog.exe

run: prog.exe
	.\prog.exe

clean:
	del /Q prog.exe

.PHONY: run clean
