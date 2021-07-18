#include <iostream>

int main(){

    void* ptr;
    double var = 69
    ;

    ptr = &var;

    std::cout << "The content of the pointer is : ";
    // use typecast to print pointer content
    
    std::cout << *(static_cast<double*>(ptr)) << std::endl;

    return 0;
}

