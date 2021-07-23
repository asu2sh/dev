#include <iostream>

int main(){

    int* ptr;
    double* ptr2;

    ptr = new int;      //! Syntax: pointerVariable = new dataType;
    ptr2 = new double;

    *ptr = 69;
    *ptr2 = 69.96;

    // new operator returns the address of the memory location.
    // In the case of an array, the new operator returns 
    // the address of the first element of the array.

    std::cout << *ptr << std::endl;
    std::cout << *ptr2 << std::endl;

    delete ptr;         //! Syntax: delete pointVar;
    delete ptr2;

    //  deallocate the memory





}