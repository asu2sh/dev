#include <iostream>

void test()
{
    // var is a static variable
    static int var = 0;
    ++var;

    std::cout << var << std::endl;
}

int main()
{
    
    test();
    test();

    return 0;
}