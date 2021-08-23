#include <iostream>

enum designFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

// Since, the integral constants are power of 2, 
// you can combine two or more flags at once without overlapping using bitwise OR | operator.
// This allows you to choose two or more flags at once.

int main() 
{
    int myDesign = BOLD | UNDERLINE; 

        //    00000001
        //  | 00000100
        //  ___________
        //    00000101

    std::cout << myDesign << std::endl;

    return 0;
}