# Elkana Munganga
# CSIS 252
# Assignment 4

# Description
# This makefile will make the example program of an mph class

EXE = prog4

CC = g++

OBJECTS = main.o mph.o

LFLAGS =

CFLAGS =

$(EXE): 	$(OBJECTS)
			$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o: 	main.cpp mph.h
			$(CC) $(CFLAGS) -c main.cpp

mph.o:		mph.cpp
			$(CC) $(CFLAGS) -c mph.cpp

clean: 	
		rm -rf $(EXE) $(OBJECTS) *~
