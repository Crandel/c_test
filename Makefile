CC=gcc
CFLAGS=-I.
SOURCES=main.c strings.c
EXEC=bin/run

all:
	$(CC) $(SOURCES) -o $(EXEC) $(CFLAGS)
