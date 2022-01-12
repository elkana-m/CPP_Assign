Author: Elkana Munganga & Ayesh Rebeira Due : Friday 10/29/2021 Created: Thursday 12/09/2021 Assignment 6

DESCRIPTION
------------
This is a C++ program for assignment 6. he purpose of this program is the use of stacks and queues to simulate a real-world scenario where a person with his friends are decorating, and eating, pancakes at a round table with a revolving server (also called a Lazy Susan). The table is broken and can only turn in one direction. 

Each person sitting at the table could access either their own plate (which does not move) or the serving plate on the revolving server. It starts with each person having 2 pancakes on both their plate and on the serving plate that they can access. Each person can access one and only one serving plate at a time. No one can access anyone else's plate.

The program consists of 4 files with the makefile included. The first file is the main.cpp which is the point of execution for the program. The file main.cpp is a test driver that creates instances of each of the stack and queue class and call methods on them to test that they're working. The main also has additionnal functions that help us implement the necessary tools that represent a real life situation for this program.


The additional files include the makefile and the header files queue.h and stack.h from Malik text, Chapter 18. All credit goes to Dr. Chen for providing these header files on GitHub.


*Note*
The stacks and queue implementation were implemented by the instructor. Therefore, I decided to use them instead of implementing new ones since these would have turned out to be the same.


HOW TO RUN
------------
First type make clean to remove all the .o files and prog. Then type make. Follow the procedure below to compile and run the program.

Step1: make clean

Step2: make

Step3: type ls to see if all the .o files and prog3 were created. If they exist it means the program works. Then proceed to Step4.

Step4: type prog6 to run the program.

If the program successfully runs:
1. you will receive a message to screen asking to enter the number of people who are eating.
2. The next steps are straight forward since I made it to be user friendly.