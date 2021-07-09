#include <iostream>

// Global variable
int num;

// Function declaration
int& test();

int main()
{
    test() = 5;

    std::cout << num
              << std::endl;

    return 0;
}

/*
you cannot return local variable or constant
from this function as it doesnt return a value.
*/

int& test()
{
    return num;
}

/*
In program above, the return type of function test() is int&.
Hence, this function returns a reference of the variable num.

The return statement is return num;.
Unlike return by value, this statement doesn't return value of num,
instead it returns the variable itself (address).

So, when the variable is returned
it can be assigned a value as done in test() = 5;

This stores 5 to the variable num,
which is displayed onto the screen.
*/