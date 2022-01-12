# Author: Dr. Andrew Chen
# Modified by: Elkana Munganga & Ayesh rebeira
# Filename: makefile
# Date: 12/7/2021
# Class: CSIS 252
# Assignment 7


OBJECTS = main.o random.o 
CC=g++

prog:		$(OBJECTS)
		$(CC) -o prog $(OBJECTS)
main.o:		main.cpp *.h
		$(CC) -c main.cpp
random.o:	random.cpp
		$(CC) -c random.cpp
clean:
		rm -rf *.o *~ prog