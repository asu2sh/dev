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

int& test()
{
    return num;
}