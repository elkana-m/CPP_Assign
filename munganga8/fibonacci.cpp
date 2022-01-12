#include "fibonacci.h"


// recursive function of fibonacci sequence
int fibonacci(int num)
{

    if (num == 0)
    {
        return 0 ;
    }
    else if (num == 1)
    {
        return 1 ;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2) ;
    }

}



// collatz conjecture recursive function
int collatz(int num)
{
    if (num == 1)
    {
        return 0 ;
    }
    else if (num == 0)
    {
        return 1 ;
    }
    else if ((num % 2) == 0)
    {
        return 1 + collatz(num/2) ;
    }
    else
    {
        return 1 + collatz((num * 3 ) + 1) ;
    }
}
