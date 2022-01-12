/*
Author: Elkana Munganga & Ayesh Rebeira
Filename: main.cpp
Date: 12/09/2021
Class: CSIS 252
Assignment 4
Description:
test driver that creates instances of each of the
two different classes and call 
methods on them to test that they're working.
Also contains additional functions that let the user
and his friends eat, decorate, put and get their
pancakes.

*/

#include "stack.h"
#include "queue.h"
#include <string>
#include <iostream>


using namespace std;


// function forward declarations

void rotation(queueType< stackType<string> >& ) ;
void decorating(stackType<string>& )            ;
void get(stackType <string>& , queueType<stackType <string> >& ) ;
void put(stackType <string>& , queueType<stackType <string> >& ) ;
void eat(stackType <string>& , queueType<stackType <string> >& ) ;

int main()
{
    int people ;
    int choice ;


    // determining the number of people on the table / eating
    cout << "How many people are eating today? : " ;
    cin >> people ;

    // Precising that the number of people shouldn't be less than 2
    if (people < 2)
    {
        cout << "\nSharing is caring!"
             << "\nMom doesn't want you to eat alone...\n" ;

        while (people < 2)
        {
            cout << "\nPlease, at least call one more friend or more!\n"
                 << "\nNow, how many people are eating today? : " ;
            cin >> people ;
        }
    }

    // starting with 2 undecorated pancakes on the plate as required
    stackType <string> plate ;
    plate.push("") ;
    plate.push("") ;

    // declaring a queue of stack of strings
    queueType< stackType <string> > lazySue ;


    // Menu
    cout << "\nMenu Selection\n"
         << "-----------------\n" 
         << "0. exit\n"
         << "1. Rotate\n"
         << "2. Decorate\n"
         << "3. Get\n"
         << "4. Put\n"
         << "5. Eat\n" 
         << "\nChoose a number from the above: ";

    cin  >> choice ; 
    cout << "\n"   ;

    for (int i = 0; i< choice; i++)
    {
        lazySue.addQueue(plate) ;
        // lazySue.push(plate) ;
    }


    while (choice != 0)
    {
        if (choice == 1) 
        {
            rotation(lazySue);
            cout << "Next plate" << endl;
        }
        else if (choice == 2)
        {
            decorating(plate);
        }
        else if (choice == 3)
        {
            get(plate, lazySue);
            cout << "New pancake was added" << endl;
        }
        else if (choice == 4)
        {
            put(plate, lazySue);
            cout << "Pancake was removed" << endl;

        }
        else if (choice == 5)
        {
            eat(plate, lazySue);
        }
        else 
        { 
            cout << "Please choose from the menu" << endl;
        }

    
        // Menu
        cout << "\nMenu Selection\n"
             << "-----------------\n" 
             << "0. exit\n"
             << "1. Rotate\n"
             << "2. Decorate\n"
             << "3. Get\n"
             << "4. Put\n"
             << "5. Eat\n" 
             << "\nChoose a number from the above: ";

        cin  >> choice ; 
        cout << "\n"   ;
        
    }
    
    return 0;

    

}



// Implementations of Functions


// function that rotate lazy susan -- to recheck
void rotation(queueType< stackType<string> >& lazySue)
{
    stackType<string> rotate = lazySue.front() ;
    if (!lazySue.isEmptyQueue())
    {
        lazySue.front() ;
        lazySue.addQueue(rotate) ;
    }
}


// function to decorating pancake
void decorating(stackType<string>& plate)
{
    if (!plate.isEmptyStack())
    {
        string decorate ;
        cout << "Decorate Here! What would you like to add to your pancake? : " ;
        cin >> decorate ;

        plate.top() +=  decorate + " " ;
        cout << decorate << " was added to your pancake"<< endl;
    }
    else
    {
        cerr << "Oops! seems like there is no more pancake.\n" ;
    }
}

// function to take pancake from the server and add it to personal plate
void get(stackType <string>& plate, queueType<stackType <string> >& lazySue)
{
    string serve = lazySue.front().top() ;
    lazySue.front().top() ;

    plate.push(serve) ;
    if(lazySue.front().isEmptyStack())
    {
        cerr << "\nThe pancakes finished :(\n" << endl;
        exit(0) ;
    }
}


// function that takes the pancake and puts it on the plate on top of lazy susan
void put(stackType <string>& plate, queueType<stackType <string> >& lazySue)
{
    if (!plate.isEmptyStack())
    {
        string pancake = plate.top() ;
        lazySue.front().push(pancake) ;
        plate.pop() ;
    }
    else
    {
        cerr << "\nThe pancakes finished :(\n" << endl;
        exit(0) ;
    }
}


// function that takes the pancake off the plate and displays that it was eaten
void eat(stackType <string>& plate, queueType<stackType <string> >& lazySue)
{
    if (plate.isEmptyStack())
    {
        cerr << "Hmm, you ate all the pancakes. Your plate is empty! :)\n";
    }

    cout << plate.top() << "\n this one was tasty...\n" << endl ;
    plate.pop() ;
}



