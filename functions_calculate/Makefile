PROG = calc.exe
SRC = main.c math_utils.c
CFLAGS = -g
LIBS =

all: $(PROG)

$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC) $(LIBS)

clean:
	rm -f $(PROG)

.PHONY: all clean