/*
Author: Elkana Munganga
Filename: mph.cpp
Date: 11/12/2021
Class: CSIS 252
Assignment 4

Description:
This file contains the implementation for an mph class

*/

#include "mph.h"
#include <iostream>
#include <string>



// using namespace std ;

// Place the definitions of the function main and the other
// user-defined functions here


// default constructor with initial value = to 0
mph::mph(){}



mph::mph(double num)
{
    setValue(num) ;
    unitType = "mph";
}

// overloaded assignment operator
void mph::operator = (const mph& c)
{
    unitValue = c.unitValue ;
}

double mph::getValue() const
{
    return unitValue ;
}

void mph::setValue(const double mphNum)
{
    unitValue = mphNum ;
}


string mph::getUnitName() const
{
    return "mph" ; 
}

void mph::setUnitName(string unit)
{
    // flag to indicate a found unit
    bool  unitFound = false ;
    string unitsList[11] = {"mph", "Mph", "milesperhour", "mPh", "mpH", "mPH", 
                            "MPH", "MPh", "MpH", "MILESPERHOUR", "MilesPerHour"} ;

    // iterate through the list to check a found number
    for (int i = 0; i < 11; i++)
    {
        if (unit == unitsList[i])
        {
            unitType = unit ;
            unitFound = true ;
        }
        
    }

    // throw error message if the unit is not found
    if (unitFound == false)
    {
        cerr << "\n    :( Unable to find the unit :("
             <<" \n The entered value will be set to mph\n" ;
    }
}


// comparisons operators -> line:75-93
bool mph::operator == (const mph& unit) const
{
    return (unitValue == unit.unitValue );
}

bool mph::operator != (const mph& unit) const
{
    return (unitValue != unit.unitValue );
}

bool mph::operator > (const mph& unit) const
{
    return (unitValue >= unit.unitValue );
}

bool mph::operator < (const mph& unit) const
{
    return (unitValue <= unit.unitValue );
}





// Input the unit
istream& operator >> (istream& input, mph& unit)
{
    double unitValue ;
    string unitName ;

    // input the value and unit
    input >> unitValue
          >> unitName ;

    // setting the value to the entered unit
    unit.setValue(unitValue) ;
    unit.setUnitName(unitName) ;

    return input ;
}

// Output the unit
ostream& operator<< (ostream& output, const mph& unit)
{   
    // print the number and unit
    output << "\nNumber and unit:" << unit.unitValue << " " << unit.unitType <<"\n" ; 

    return output ;
}



