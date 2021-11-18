/*
Author: Elkana Munganga
Filename: ForceToPower.h
Date: 11/17/2021
Class: CSIS 252
Assignment 5

Description:
- Parent's class implementation.
- Using force of KGf from Ayesh and HorsePower by Mahmod
- ForceToPower.h has the ForceToPower class 
  declaration, but no method implementations.
*/

#ifndef _ForceToPower_H_
#define _ForceToPower_H_

#include <string>

using namespace std ;


class ForceToPower
{
    public:
        // Virtual methods
        virtual void   convert ()              = 0 ;
        virtual double getValue() const        = 0 ;
        virtual string getName ()  const       = 0 ;

        // constructors
        ForceToPower() ;
        ForceToPower(double num) ;

    protected:
        double value ;
        string unitName ;
};



/*
   ok --> 1. Write the file main.cpp and some additional files.
   ok --> 2. The additional files must include three .h and three .cpp and these will be for the header (class declaration) and 
             implementation (definition of class methods) of three different classes respectively.
   ok --> 3. Two of these classes will be classes that you adapt from other student's Assignment 4 code that they are sharing with you 
             using git. If you have difficulty understanding their code, you're welcome to communicate with them about it and/or review 
             the Assignment 5 directions.
      
   ok --> 4. The third class is the class that you will write. It will be a parent class. 
             For example, if one class you chose was for yards and one was for meters, then the parent class would be a LengthMeasurement 
             class. The parent class will be an abstract class 
             - you will not be able to create concrete instances of it, because it will have pure virtual methods 
             (virtual methods which are declared but not defined in that class - they were covered in the Chapter 13 lecture).

   ok --> 5. The main function will be a test driver, that will create instances of each of the two different (non-abstract) classes and 
             call methods on them to test that they're working. It will also create a pointer to the abstract class, and use it to test 
             to ensure that the virtual methods are indeed virtual (the concrete classes will be called using the -> syntax on 
             the abstract class pointer).

      ok --> 6. All methods of all of the non-abstract classes that you provide must be tested by your main function.
      ok --> 7. All of the concrete classes must satisfy the Assignment 4 requirements.
*/

#endif