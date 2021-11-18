/*
Author: Ayesh Rebeira
Filename: weight.cpp
Class: CSIS 252
Assignment 4

Description:
weight.cpp includes weight.h and has the 
implementation of all the weight methods.
*/

#include <string>
#include <iostream>
#include "weight.h"



using namespace std;

kiloGrams::kiloGrams()
{
	value = 0;
	unitName = "Kg";
};

kiloGrams::kiloGrams(double num)
{
	value = num;
	unitName = "Kg";
};

double kiloGrams::getValue() const
{
	return value;
};

void kiloGrams::setValue(const double num)
{
	value = num;
};

void kiloGrams::setName(string temp)
{
	bool found = false;
	string names[4] = { "Kg" , "kiloGrams","kg","kilograms" };
	for (int i = 0; i < 4; i++)
		if (temp == names[i])
		{
			unitName = temp;
			found = true;
		}
	if (found)
	{
		cout << "Name of unit: " << temp << endl;
	}
	else
		cout << temp << ", not found." << endl;
};

string kiloGrams::getName() const
{
	return unitName;
};

ostream& operator << (ostream &output, const kiloGrams &kg)
{
	output << kg.getValue() << " " << kg.getName();
	return output;
};

istream& operator >> (istream &input, kiloGrams &kg)
{
	float tempVal;
	string tempNam;
	cout << "Enter a value:";
	input >> tempVal;
	cout << "Enter name of the unit:";
	input >> tempNam;
	kg.setValue(tempVal);
	kg.setName(tempNam);
	return input;
};

kiloGrams::kiloGrams(kiloGrams &o)
{
	value = o.getValue();
	unitName = o.getName();
};

bool kiloGrams::operator < (const kiloGrams& kg) const
{
	cout << "Program in the operator <\n";
	return (value < kg.getValue());
};

bool kiloGrams::operator == (const kiloGrams& kg) const
{
	cout << "Programn in the operator ==\n";
	return (value < kg.getValue());
};

bool kiloGrams::operator != (const kiloGrams& kg) const
{
	cout << "Program in the operator !=\n";
	return (value != kg.getValue());
};

bool kiloGrams::operator >= (const kiloGrams& kg) const
{
	cout << "Program in the operator >=\n";
	return (value >= kg.getValue());
};

bool kiloGrams::operator <= (const kiloGrams& kg) const
{
	cout << "Program in the operator <=\n";
	return (value <= kg.getValue());
};

bool kiloGrams::operator > (const kiloGrams& kg) const
{
	cout << "Program is in the operator >\n";
	return (value > kg.getValue());
};

// convert horsepower to kgf
void kiloGrams::convert()
{
    double tmpVal = value;
    value = value / 0.013 ;
    cout << "Converted "
         << tmpVal
         << " horsepower to Kilogram force meter: "
         << value << "\n" ;
}
