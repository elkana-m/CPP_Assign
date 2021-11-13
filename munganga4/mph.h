/*
Author:Elkana Munganga
File: convertion.h
Date: 

Description: 
This file contains the specification for the mph unit class
*/

#ifndef _MPH_H_
#define _MPH_H_

#include <string>
using namespace std ;

class mph            // change name of class to Mph or MPH same goes for ctors
{
//   Kilometers per hour(kph) --> Miles per hour(mph) [1 kph --> 0.62 mph]

    // friend insertion & extraction operators
    friend istream& operator >> (istream&, mph &);     // input
    friend ostream& operator << (ostream&, const mph &);     // output

    public:
        // default constructor with initial value = to 0
        mph();

        // constructor with parameter
        mph(double) ;

        // copy constructor
        mph(const mph& c) ;

        // Overloaded assignment
        void operator = (const mph& ) ;
        // convertion& operator = (const convertion& convertion) ;      // what is the difference with one above?


        // Getters ( value & unit )

        double getValue() const ;              // get the value (quantity of the Mph)
        string getUnitName() const;                 // get the name of the unit


        // Setters ( value & unit )

        void setValue(const double) ;        // set the value (quantity of the Mph)
        void setUnitName(string) ;           // set the name of the unit





        
        // comparison between different intances of the class
        bool operator == (const mph& ) const;
        bool operator != (const mph& ) const;
        bool operator > (const mph& ) const;
        bool operator < (const mph& ) const;

        // input reads in a number and a string and makes sure that 
        // the string matches the unit name or abbreviation
        void input(double, string) ;

        // output writes out the number and then a string that is 
        // either the unit name or plural or abbreviation) 
        // (overloaded and/or friend insertion and extraction operators
        void output(double, string) ;

    private:
        double unitValue ;
        string unitType ;

};


#endif