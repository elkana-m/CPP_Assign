/*
Author: Elkana Munganga
Filename: main.cpp
Date: 11/12/2021
Class: CSIS 252
Assignment 4

Description:
main.cpp: all methods of the class 
provided are be tested by the main
function.
This program will test the class.

*/

#include <iostream>
#include<iomanip>
#include "mph.h"

using namespace std;

int main()
{

    // variable to ask user number to enter -- (testing insertion operator)
    double userNum ;
    
    // first object takes in a number
    mph number0(70) ;

    // Testing output (extraction)
    cout << "\nTesting extraction operator(output)\n" 
         << "-------------------------------------"
         << number0 ;

    // objects: number1 tests for setter, number2 tests for default constructor
    //          number3 tests for assignment operator
    mph number1(userNum), number2, number3 ;
    

    // testing setter by setting number to user's entered number
    cout << "\n--Testing insertion operator & setter--\nNote: Unit should be MilesPerHour or its abbreviation!\n"
         << "--------------------------------------------------------"
         << "\nPlease enter the number(value) and unit after a space: ";
    
    // prompt user for value & unit -- insertion operator test
    cin >> number1 ;
    // extraction operator test
    cout << number1 ;

    // using assignment operator
    number3 = number1 ;

    cout << "\n* ************************************************************************* *\n" ; 

    cout << "* Number0 passes in a value -- test for constructor that takes in a number  * "
         << "\n* Number1 passes in a value from the user prompt -- test insertion operator * " 
         << "\n* Number2 passes in a value -- test for default constructor                 * " 
         << "\n* Number3 is a copy of number 1 -- test for assignment operator             * " ; 
    cout << "\n* ************************************************************************* *\n" ; 
    
    // Display to objects and their values
    cout << fixed << setprecision(2)
         << "\nTesting the getters\n"
         << "----------------------"
         << "\nNumber0 value: " << number0.getValue()    << "\n"
         <<   "Number0 unit: "  << number0.getUnitName() << "\n"
         << "\nNumber1 value: " << number1.getValue()    << "\n"
         <<   "Number1 unit: "  << number1.getUnitName() << "\n"
         << "\nNumber2 value: " << number2.getValue()    << "\n"
         <<   "Number2 unit: "  << number2.getUnitName() << "\n"
         << "\nNumber3 value: " << number3.getValue()    << "\n"      // copying still does not work
         <<   "Number3 unit: "  << number3.getUnitName() << "\n" << endl ;

    
//////////////////////////////////////////////////////////////////////////////////////////////////

    // Testing the comparisons between different instances of the class"

    cout << "\n* **************************************************************** *" ; 

    cout << "\n* Testing the comparisons between different instances of the class * \n" ; 

    
    if (number1 == number2)
    { 
        cout << "\nNumber 1 and "
             << "number 2 are equal." << endl ;

    }
    else
    {
        cout << "\nNumber 1 and "
             << "Number 2 are not equal."
             << endl;  
        
        if (number1 != number3)
        {
            cout << "Number3 is not equal to number 1\n" ;
        }
        else
        {
            cout << "Number3 and Number 1 are equal \n" ;
        }


    }
    if (number1 > number2)
    {
        cout << "Number 1 is greater than number 2\n" ;
        
        if (number3 < number1)
        {
            cout << "Number 1 is equal to number\n" ;
        }
        else
        {
            cout << "Number 1 is the greatest number\n" ;
        }
        
    }
    else
    {
        cout << "Number 1 is less than number 2\n" ;
    }

    // Testing the setter
    number2.setUnitName("mph") ;
    cout << "\nTesting setter\n"
         << "----------------------\n"
         << "\nBefore Number2 was " << number2 ;
    
    // setting number2 to be 45 mph
    number2.setValue(45) ;
    number2.setUnitName("MPH") ;
    cout << "\nTesting setter\n"
         << "After setting number: "
         << number2 
         << "\n";

}
