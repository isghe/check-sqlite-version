CC = gcc
CFLAGS = -Wall -ansi -pedantic -Wextra
EXECUTABLE = out/check-sqlite-version

all: release debug

debug: Makefile main.c
	$(CC) $(CFLAGS) -g -D_DEBUG main.c -lsqlite3 -o $(EXECUTABLE)_d.out

release: Makefile main.c
	$(CC) $(CFLAGS) -O3 main.c -lsqlite3 -o $(EXECUTABLE).out

.PHONY: clean
clean:
	-rm -f *.out
	-rm -rf *.dSYM
