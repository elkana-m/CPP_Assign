Author: Elkana Munganga & Ayesh Rebeira
Due : Friday 10/15/2021 
Created: Tuesday 12/7/2021 
Assignment 7


DESCRIPTION
------------
This is a C++ program. The purpose of this program is to do timing on different sorts, with different sizes of data sets and see how well they do in timing. I also constructed a chart that shows the difference in timing between them. When we run, we should expect some to execute fast, faster and we can maybe determine the fastest sorting algorithm.

The sorting algorithms used in this program are 4, but we exploit 3 so far to compare how fast the execution was.

The three sorting algorithms that we used are:
    * heapsort
    * mergesort
    * quicksort

RESULT
-------
Based on the experiment done, we noticed that the heap seemed to be the fastest among all with a real timing execution of 0.042 second, then comes the merge sorting algorithm with a real timing execution of 0.697 second, and finally the quick sorting algotihm having a timing execution of 0.420 second.

The chart below illustrate the comparison between these different sorting algorithms. We compared these sorting algorithms in real time, user time, and sys time.
The real time is represented by the pyramid form. The user time is represented by the square box form, and finally the sys time is represented by the cylindrical form.

"*** image is found in the submitted folder ***"



HOW TO RUN
------------
First type make clean to remove all the .o files and prog. Then type make. Follow the procedure below to compile and run the program.

Step1: make clean

Step2: make

Step3: type ls to see if all the .o files and prog3 were created. If they exist it means the program works. Then proceed to Step4.

Step4: time ./prog > filename.txt
The '>' sign is simply to redirect the output of the program to the text file filename.txt, but this is not a must.
If you still want the output to be at console, then you may simply type this:
        time ./prog
