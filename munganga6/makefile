# Elkana Munganga & Ayesh Rebeira
# CSIS 252
# 12/09/2021
# Assignment 6

# Description
# This makefile will make the example program of the classes we used

EXE = prog6

CC = g++

OBJECTS = main.o

LFLAGS =

CFLAGS =

$(EXE): 			$(OBJECTS)
					$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		 		main.cpp stack.h queue.h
					$(CC) $(CFLAGS) -c main.cpp


clean: 	
		rm -rf $(EXE) $(OBJECTS) *~