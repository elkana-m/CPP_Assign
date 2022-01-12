# Elkana Munganga
# CSIS 252
# Assignment 5

# Description
# This makefile will make the example program of the classes we used

EXE = prog8

CC = g++

OBJECTS = main.o fibonacci.o

LFLAGS =

CFLAGS =

$(EXE): 			$(OBJECTS)
					$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		 		main.cpp fibonacci.h
					$(CC) $(CFLAGS) -c main.cpp

fibonacci.o:		fibonacci.cpp
					$(CC) $(CFLAGS) -c fibonacci.cpp



clean: 	
		rm -rf $(EXE) $(OBJECTS) *~