/*
Author: Ayesh Rebeira
Filename: weight.h
Class: CSIS 252
Assignment 4

Description:
weight.h includes ForceToPower.h and has the weight 
class declaration, but no method implementations.
*/

#ifndef _WEIGHT_H_
#define _WEIGHT_H_

#include <string>
#include "ForceToPower.h"

using namespace std;


class kiloGrams: public ForceToPower
{
    public:
        kiloGrams(double num);
		kiloGrams();
        kiloGrams(kiloGrams& o);
        void setValue(const double num);
		void setName(string temp);
		double getValue() const;
		string getName() const;
		void convert() ;
		kiloGrams operator = (const kiloGrams& kg);
		bool operator == (const kiloGrams& kg) const;
		bool operator != (const kiloGrams& kg) const;
		bool operator <= (const kiloGrams& kg) const;
		bool operator > (const kiloGrams& kg) const;
		bool operator < (const kiloGrams& kg) const;
		bool operator >= (const kiloGrams& kg) const; 

    // private:
        // double value ;
        // string unitName ;

};
	ostream& operator << (ostream& output, const kiloGrams& kg);
	istream& operator >> (istream& input, kiloGrams& kg);
#endif

