# Elkana Munganga
# CSIS 252
# Assignment 5

# Description
# This makefile will make the example program of the classes we used

EXE = prog5

CC = g++

OBJECTS = main.o ForceToPower.o horsePower.o weight.o

LFLAGS =

CFLAGS =

$(EXE): 			$(OBJECTS)
					$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		 		main.cpp ForceToPower.h horsePower.h weight.h
					$(CC) $(CFLAGS) -c main.cpp

ForceToPower.o:		ForceToPower.cpp
					$(CC) $(CFLAGS) -c ForceToPower.cpp

horsePower.o:		horsePower.cpp
					$(CC) $(CFLAGS) -c horsePower.cpp

weight.o:			weight.cpp
					$(CC) $(CFLAGS) -c weight.cpp

clean: 	
		rm -rf $(EXE) $(OBJECTS) *~