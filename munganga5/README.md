Author: Elkana Munganga Due : Friday 10/15/2021 Created: Friday 11/17/2021 Assignment 5

DESCRIPTION:

This is a C++ program for assignment 5. All input is from the keyboard. All output is to the screen.

The program consists of 8 files with the makefile included. The first file is the main.cpp which is the point of execution for the program. The file main.cpp is a test driver that creates instances of each of the two different (non-abstract) classes and call methods on them to test that they're working.

The additional files include three .h and three .cpp and these are also for the header (class declaration) and implementation (definition of class methods) of three different classes respectively.

Four of these classes are classes adapted from two other classmates' Assignment 4 code shared through git. The files include:

* horsePower.cpp
* weight.cpp
* horsePower.h
* weight.h

The remaining classes were written by the author of the project (me). These include the abstract parent class, its definition class and the main. The parent class declares pure virtual methods, but however, not defined in that class.

Note:
- All methods of all of the non-abstract classes provided are tested by the main function.
- All of the concrete classes satisfy the Assignment 4 requirements.

HOW TO RUN:

First type make clean to remove all the .o files and prog. Then type make. Follow the procedure below to compile and run the program.

Step1: make clean

Step2: make

Step3: type ls to see if all the .o files and prog3 were created. If they exist it means the program works. Then proceed to Step4.

Step4 type prog4 to run the program.

If the program successfully runs:
1. you will receive a message to screen asking to enter the value and the units (This will be horsepower). Be sure the enter horsepower unit or its abbrviation. The program will then display all the result from the tested methods for horsepower.
2. You will receive a second prompt asking the same thing, but this time, make sure the enter kilogram force unit or its abbrviation. The program will then display all the result from the tested methods for kilogram force.

These will be the unit testcases that the program accepts: 
- for horse power: {"hp" , "horsepower"}
- for Kilogram force: { "Kg" , "kiloGrams","kg","kilograms" }