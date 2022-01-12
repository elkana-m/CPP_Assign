#include "fibonacci.h"
#include <iostream>

using namespace std ;

int main()
{

    int fibNum ;
    int collatzNum ;

    int choice ;
    bool endP = true ;

    cout << " \nRecursive Functions:" ;
    cout << " \n1. Fibonacci number sequence " ;
    cout << " \n2. collatz conjecture\n" ;
    cout << "\nEnter 1 or 2 to select the recursive function you want to test: " ;
    cin >> choice ;

    if (choice == 1)
    {
        cout << "\nEnter the number of fibonacci you'd like to check: " ;
        cin >> fibNum ;
        cout <<"\nThe fibonacci of "<< fibNum << " is " <<fibonacci(fibNum) << "\n" ;
    }
    else if (choice == 2)
    {
        cout << "Enter the number of collatz you'd like to check: " ;
        cin >> collatzNum ;
        cout <<"\nThe collatz conjecture of "<< collatzNum << " is " << collatz(collatzNum) << "\n" ;
    }
    else
    {
        cout << "\nProgram ended successfully :)\n" << endl ;
        endP = false ;
    }

}
