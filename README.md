Author: Elkana Munganga
Assignment 4

DESCRIPTION:

This is a C++ program for assignment 4. Some input is from the keyboard, 
and some input is from a file. All output is to the screen. 

The program consists of 4 files with the makefile included. The 
first file is the main.cpp which is the point of execution for 
the program. The file main.cpp is a test driver, that will create instances of the mph class and call methods on them to test that they're working. Basically, all methods of the class that provided are be tested by the main function.

The mph class inside mph.h file provides the following methods:
    
    * a default constructor, that sets the initial value to zero
    
    * a constructor that takes in a number (your choice of int, float, double, and so on) and sets the initial value to that
    
    * copy constructor
    
    * overloaded assignment operator
    
    * a way to set and get that value (the quantity of the unit)
    
    * comparisons between different instances of your class (just compares the values) (overloaded operators)
    
    * ways to input and output your unit (input reads in a number and a string and makes sure that the string matches the unit name or abbreviation, and output writes out the number and then a string that is either the unit name or plural or abbreviation) (overloaded and/or friend insertion and extraction operators)
    
    * ways to get the name of the unit (for example, returns a string "meter" if this is for meters), the abbreviation of the unit (for example, returns the string "m" if this is for meteres), and the plural of the name of the unit (for example, returns the string "meters" if this is for meters). Note that for unit names, support both American and British spellings.


The makefile dependencies are main.o mph.o.

HOW TO RUN:

First type make clean to remove all the .o files and prog. Then
type make. Follow the procedure below to compile and run the 
program.

Step1:
make clean

Step2:
make

Step3:
type ls to see if all the .o files and prog3 were created. If 
they exist it means the program works. Then proceed to Step4.

Step4
type prog4 to run the program.


If the program successfully runs, you will receive a message to screen 
asking to enter the value and the units. Be sure the enter mileperhour
unit or its abbrviation. These will be the unit testcases that the program
accepts: {"mph", "Mph", "milesperhour", "mPh", "mpH", "mPH", "MPH", "MPh", "MpH", "MILESPERHOUR", "MilesPerHour"}
