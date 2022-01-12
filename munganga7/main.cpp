/*
Author: Dr. Andrew Chen
Modified by: Elkana Munganga & Ayesh rebeira
Filename: main.cpp
Date: 12/7/2021
Class: CSIS 252

Assignment 7
*/

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cstring>
#include "constants.h"
#include "bubble.h"     // BubbleSort
#include "heapsort.h"   // HeapSort
#include "quicksort.h"  // QuickSort
#include "mergesort.h"  // MergeSort
#include "random.h"

using namespace std;

int main(int argc, char* argv[])
{
   if (argc<2)
   {
      cout << "you must specify a sort\n";
      // cout << "   prog BubbleSort\n";
      cout << "   prog HeapSort\n";
      cout << "   prog QuickSort\n";
      cout << "   prog MergeSort\n";
      exit(1);
   }
   int numbers[MAX_ITEMS];  // MAX_ITEMS defined in constants.h
   RandomNumber rnd(1); // seeding produces same random list
   for (int i=0; i< MAX_ITEMS; i++)
      numbers[i]=rnd.Random(1000000)+1;    // array contains random values
//      numbers[i]=i;                   // array already sorted
   if (strcmp(argv[1],"HeapSort") == 0)
      HeapSort(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"QuickSort") == 0)
      QuickSort(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"MergeSort") == 0)
      MergeSort(numbers,MAX_ITEMS);
   else
   {
      cout << "not a valid sort\n";
      exit(1);
   }
   cout << "sorted " << MAX_ITEMS 
      << " ints (can be changed in constants.h)\n";
//   for (int i=0; i<MAX_ITEMS; i++)
//      cout << '[' << setw(2) << i << "] = " << setw(6) << numbers[i] << endl;
   return 0;
}