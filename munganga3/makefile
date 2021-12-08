# Elkana Munganga
# CSIS 252
# Assignment 3


EXE = prog3

CC = g++

OBJECTS = main.o check3.o

LFLAGS =

CFLAGS =

$(EXE): 	$(OBJECTS)
			$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o: 	main.cpp check3.h
			$(CC) $(CFLAGS) -c main.cpp

check3.o:	check3.cpp
			$(CC) $(CFLAGS) -c check3.cpp

clean: 	
		rm -rf $(EXE) $(OBJECTS) *~
