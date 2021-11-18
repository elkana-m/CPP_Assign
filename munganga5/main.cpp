/*
Author: Elkana Munganga
Filename: main.cpp
Date: 11/12/2021
Class: CSIS 252
Assignment 4
Description:
test driver that creates instances of each of the
two different (non-abstract) classes and call 
methods on them to test that they're working. 

*/

#include <iostream>
#include <string>
#include <fstream>
#include "horsePower.h"
#include "ForceToPower.h"
#include "weight.h"

using namespace std;

// The function test has a formal reference parameter fp1 of type ForceToPower
void test(ForceToPower &fp1)
{
    // body of the function test calls the member function:
    // convert, getName and getValue
    fp1.convert() ;
    fp1.getName() ;
    fp1.getValue() ;


}


int main()
{

    // Testing horsePower class methods 

    // horsePower class objects
    horsePower hp1;
    horsePower hp2(2);
    horsePower hp3(hp2);

    cout << "hp1: " << hp1 << endl;
    cout << "hp2: " << hp2 << endl;
    cout << "hp3: " << hp3 << endl;
    
    cout << "\nTESTING SETTERS\n";
    cout << "-----o---------\n";


    hp1.setValue(1);
    hp1.setName("hp");

    cout << hp1 << endl;
    
    cout << "\nTESTING COMPARISON OPERATORS\n";
    cout << "-----o----------o----------\n";


    if (hp1 < hp2)
	cout << "hp1 is smaller than hp2\n";
    if (hp1 > hp2)
	cout << "hp1 is greater than hp2\n";
    if (hp3 == hp1)
	cout << "hp3 is equal to hp1\n";
    if (hp2 != hp3)
	cout << "hp2 is not equal to hp3\n";

    cout << "\nTESTING INPUT & OUTPUT\n";
    cout << "-----o------o-------\n";

    cin >> hp3;
    cout << hp3 << endl;

    hp1.convert() ;
    cout << hp1 << endl;
    // HorsePower class method test is over

    // Now testing Kilogram Force class methods
    cout << "\n" ;
    cout << "\nTesting Kilogram Force methods\n" ;
    cout << "-------o--------o-----o-------\n";

    cout << "\n" ;

    // Kilogram force class objects
    kiloGrams kg1;
    kiloGrams kg2(2);
    kiloGrams kg3(kg2);

    cout << "kg1: " << kg1 << endl;
    cout << "kg2: " << kg2 << endl;
    cout << "kg3: " << kg3 << endl;
    
    cout << "\nTEST SETTERS\n";
    cout << "----o-------\n";
    
    // Testing kilogram forces
    kg1.setValue(1);
    kg1.setName("Kg");

    cout << kg1 << endl;
    

    cout << "\nTEST COMPARISON OPERATORS\n";
    cout << "----o----------o-----------\n";
    
    // Comparing kilogram force objects
    if (kg1 < kg2)
	cout << "kg1 is smaller than kg2\n";
    if (kg1 > kg2)
	cout << "kg1 is greater than kg2\n";
    if (kg3 == kg1)
	cout << "kg3 is equal to kg1\n";
    if (kg2 != kg3)
	cout << "kg2 is not equal to kg3\n";

    cout << "\nTESTING INPUT & OUTPUT\n";

    cin >> kg3;
    cout << kg3 << endl;

    kg1.convert() ;

    cout << kg1 << endl ;


    cout << "\nTesting Virtual methods to see if they are virtual\n" ;
    cout << "--------------------------o-----------------------\n" ;
    
    // call the function test by using an object type Kilograms force
    test(kg2) ;
    
    // call the function test by using an object type horsepower
    test(hp3) ;

    // testing virtual methods to see if they are virtual
    ForceToPower *newVar ;
    ForceToPower *newVar1 ;
    ForceToPower *newVar2 ;
    
    // passing the new variables by reference
    newVar  = &kg3 ;
    newVar1 = &hp2 ;
    newVar2 = &kg1 ;

    cout << "\nDisplay the object passed as parameter in test function: " ;
    cout << kg2 << endl;
    cout << "Display the second object passed as parameter in test function: " ;
    cout << kg3<< endl;
    cout << "\n" << endl;

    // Displaying the objects passed by reference
    cout << "Display kg3 Value passed by reference: "
         << newVar->getValue()
         << "\nDisplay hp2 Name passed by reference: "
         << newVar1->getName()
         << "\nDisplay kg1 value passed by reference : "
         << newVar2->getValue() << endl;


    return 0;
}
