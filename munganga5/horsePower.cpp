/*
Author: Ahmed Mahmoud
Filename: horsePower.h
Class: CSIS 252
Assignment 4

Description:
horsePower.cpp includes horsePower.h and has the 
implementation of all the horsePower methods.

*/

// #include "ForceToPower.h"
#include "horsePower.h"
#include <string>
#include <iostream>



using namespace std;


horsePower::horsePower() : ForceToPower ()
{
    value = 0;
    unitName = "hp";
};

horsePower::horsePower(double num) : ForceToPower(num)
{
    value = num;
    unitName = "hp";
};

double horsePower::getValue() const
{
    return value;
};

void horsePower::setValue(const double num)
{
    value = num;
};

void horsePower::setName(string temp)
{
    bool found = false;
    string names[2] = {"hp" , "horsepower"};
    for (int i = 0; i < 2; i++)
	if (temp == names[i])
	{
	    unitName = temp;
    	found = true;
	}
    if(found)
    {
	cout << "Name of unit: " << temp << endl;
    }
    else
	cout << temp << ", not found." << endl;
};

string horsePower::getName() const
{
    return unitName;
};

ostream& operator << (ostream &output, const horsePower &hp)
{
    output << hp.getValue() << " " << hp.getName();
    return output;
};

istream& operator >> (istream &input, horsePower &hp)
{
    float tempVal;
    string tempNam;
    cout << "Enter a value:";
    input >> tempVal;
    cout << "Enter name of the unit:";
    input >> tempNam;
    hp.setValue(tempVal);
    hp.setName(tempNam);
    return input;
};

horsePower::horsePower(horsePower &o)
{
    value = o.getValue();
    unitName = o.getName();
};

bool horsePower::operator < (const horsePower& hp) const
{
    cout << "I'm in the operator <\n";
    return (value < hp.getValue());
};

bool horsePower::operator == (const horsePower& hp) const
{
    cout << "I'm in the operator ==\n";
    return (value < hp.getValue());
};

bool horsePower::operator != (const horsePower& hp) const
{
    cout << "I'm in the operator !=\n";
    return (value != hp.getValue());
};

bool horsePower::operator >= (const horsePower& hp) const
{
    cout << "I'm in the operator >=\n";
    return (value >= hp.getValue());
};

bool horsePower::operator <= (const horsePower& hp) const
{
    cout << "I'm in the operator <=\n";
    return (value <= hp.getValue());
};

bool horsePower::operator > (const horsePower& hp) const
{
    cout << "I'm in the operator >\n";
    return (value > hp.getValue());
};

// convert kgf to horsepower to kgf
void horsePower::convert()
{
    double tmpVal = value;
    value = value * 0.013 ;
    cout << "Converted "
         << tmpVal
         << " Kilogram force meter to horsepower: "
         << value << "\n" ;
}

/*
3 classes. Each has their own .cpp and .h files.

Let's, for example, assume we're working with ForceToPower, horsePower, and weight







The ForceToPower class has, in it's class declaration, for all the methods 
(aside from the constructor) that they're virtual (and in many cases, sometimes called "pure virtual", 
where there is no method body and thus no method implementation, and so the prototype within 
the class definition would look something like int foo(int arg) = 0; ), and possibly not much else.




*/