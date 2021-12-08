/*
Author: Elkana Munganga
Filename: main.cpp
Date: 10-24-21
Class: CSIS 252
Assignment 3

Description:

The file main.cpp has a function main that passes 
in two arguments argc and argv. We use argv as command line 
argument to allows the user to enter the name of a data file to
read. The main file check also that the fileName exist. It will 
then ask the user to enter two different units to check if they
are convertible or not.
*/

#include "check3.h"



int main(int argc, char *argv[])
{
	measurements unitArray[arraySize], typeArray[arraySize],
  unit;

	fstream fileName(argv[1]);
	
	int count = 0;
	
	// sentinel value
	bool endP = false;

		
	// checking if the file name exists.
	if(!fileName)
	{
		cerr << "Invalid File" << endl;
		endP = true;
		cout << "You need to re-run the program with the file name next to it!\n";
	}
	else
	{
		cout << "Your file exist" << endl;
		cout << "\n-------0--------\n" << endl;


		while (fileName >> unit.unitName >> unit.typeName)
		{
			cout << unit.unitName << "---" << unit.typeName << endl;
			unitArray[count] = unit;
			typeArray[count] = unit;
			count ++;
		}

	}
	
	// prompt 2 units from user	
	string usersUnit1 = unit.unitName , 
		   usersUnit2 = unit.unitName ;

	// count units inside the arrays in struct
	int countUnit1 = -1, countUnit2 = -1;


	while (!endP)
	{	
		cout << "Enter two units to convert: ";
		cin >> usersUnit1 >> usersUnit2;			// prompt the user to input two different units.


		for (int i=0; i < count; i++)
		{
			if (usersUnit1 == unitArray[i].unitName)
			{
				countUnit1 = i;
			}
			if (usersUnit2 == unitArray[i].unitName)
			{
				countUnit2 = i;
			}

		}
		
		if (countUnit1 == -1 || countUnit2 == -1)
		{	cerr << "Invalid units" << endl;}
		else													 
		{

			usersUnit1 = unitArray[countUnit1].typeName;
			usersUnit2 = unitArray[countUnit2].typeName;

			// checks if the two units have same type (convertibility)
			if (usersUnit1 == usersUnit2)
			{
				cout << "They are convertible" << endl;
			}
			else
			{
				cerr << "They are not convertible" << endl;
			}
		}
		countUnit1 = -1;
		countUnit2 = -1;
		
		int finishP;
		cout << "Press '0' to terminate your program or '1' to continue: ";
		cin >> finishP;
		
		if (finishP == 0)
		{
			endP = true;
		}
	}


	return 0;

}