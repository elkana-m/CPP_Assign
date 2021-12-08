Author: Elkana Munganga
Due : Sunday 10/24/2021
Created: Friday 10/01/2021
Assignment 3

DESCRIPTION:

This is a C++ program for assignment 3. Some input is from the keyboard, 
and some input is from a file. All output is to the screen. 

The program consists of 4 files with the makefile included. The 
first file is the main.cpp which is the point of execution for 
the program. The file main.cpp has a function main that passes 
in two arguments argc and argv. We use argv as command line 
argument to allows the user to enter the name of a data file to
read. The main file check also that the fileName exist. It will 
then ask the user to enter two different units to check if they
are convertible or not. I also imported check3.h that simply 
import check3.cpp. Check3.cpp is a file that include all the
necessary headers needed for input and output. It also holds in the struct with two types.

The makefile dependencies are main.o check3.o.

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
they exist it means the program works. Then proceed to Step4

Step4
type prog3 filename.txt
filename.txt is any textfile provided together with other files.


When the program runs, you will receive a message to screen 
asking to enter two units from the list of units displayed.
Make sure you choose from that exact list by typing exactly how 
it is listed. I have thoroughly tested this program and since 
there is no much error checking required for this program. We 
only check for errors when the user enters the enters the wrong 
units in our menu. This is a case sensitive program.

