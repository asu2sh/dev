#include <iostream>

int main(){

    int a = 5;

    int* p = &a; // declaring pointers : int *p vs int* p --> preferred syntax.
    //int *p;
    //p = &a;

    std::cout <<"a = "<< a << std::endl;
    std::cout <<"p = "<< p << "\n" << std::endl;

    //! endl doesn't occupy any memory whereas \n is character so It occupies 1 byte memory.

    std::cout <<"&a = "<< &a << std::endl;
    std::cout <<"&p = "<< &p << "\n" << std::endl;
    
    //dereferencing of pointer
    std::cout <<"*p = "<< *p << std::endl;
    
    *p = 10;

    std::cout <<"a = "<< a << std::endl;
    std::cout <<"*p = "<< *p << std::endl;


}