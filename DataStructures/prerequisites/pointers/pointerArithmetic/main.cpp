#include <iostream>

int main(){

    int a = 69;
    int *p = &a;

    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    std::cout << "\n";

    std::cout << p+1 << std::endl;
    std::cout << *(p+1) << std::endl;
    std::cout << "\n";
    
    std::cout << *p+1 << std::endl;
    



}