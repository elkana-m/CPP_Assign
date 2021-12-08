#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

int main(int argc, char *argv[])
{

	fstream fileName(argv[1]);
	
	string unit, type;
	string unitArray[10000]; 
	string typeArray[10000];
	int count = 0;
	
	// bool to end loop
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


		while (fileName >> unit >> type)
		{
			cout << unit << "---" << type << endl;
			unitArray[count] = unit;
			typeArray[count] = type;
			count ++;
		}

	}
	
	// prompt 2 units var	
	string type1, type2;

	// count units var
	int countUnit1 = -1, countUnit2 = -1;
		
	while (!endP)
	{	
		cout << "Enter two units to convert: ";
		cin >> unit >> type;
		
		for (int i=0; i < count; i++)
		{
			if (unit == unitArray[i]){
				countUnit1 = i;}
			if (type == unitArray[i]){
				countUnit2 = i;}
		}
		
		if (countUnit1 == -1 || countUnit2 == -1)
		{	cerr << "Invalid units" << endl;}
		else
		{
			type1 = typeArray[countUnit1];
			type2 = typeArray[countUnit2];
			
			if (type1 == type2)
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
