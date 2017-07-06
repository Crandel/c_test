CC = gcc
HEADERS = ./headers
CFLAGS=-I$(HEADERS)
SOURCES=$(wildcard src/*.c)

EXEC=bin/run

install:
	$(CC) $(SOURCES) -o $(EXEC) $(CFLAGS)

clean:
	  $(RM) bin/*
