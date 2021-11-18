/*
Author: Ahmed Mahmoud
Filename: horsePower.h
Class: CSIS 252
Assignment 4

Description:
horsePower.h includes ForceToPower.h and has the horsePower 
class declaration, but no method implementations.

*/

#ifndef _HORSEPOWER_H_
#define _HORSEPOWER_H_
#include "ForceToPower.h"
#include <string>
using namespace std;


class horsePower: public ForceToPower
{
    public:
        horsePower(double num);
		horsePower();
        horsePower(horsePower& o);
        void setValue(const double num);
		void setName(string temp);
		double getValue() const;
		string getName() const;
		void convert() ;
		horsePower operator = (const horsePower& hp);
		bool operator == (const horsePower& hp) const;
		bool operator != (const horsePower& hp) const;
		bool operator <= (const horsePower& hp) const;
		bool operator >  (const horsePower& hp) const;
		bool operator <  (const horsePower& hp) const;
		bool operator >= (const horsePower& hp) const; 

    // private:
    //     float uNum ;
    //     string uName;

};
	ostream& operator << (ostream& output, const horsePower& hp);
	istream& operator >> (istream& input, horsePower& hp);
#endif

