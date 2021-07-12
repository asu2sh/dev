#include <iostream>

int main(){

    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    std::cout << a <<"\n"
              << p <<"\n"
              << q <<"\n"
              << r <<"\n"<< std::endl;

    std::cout << *p <<"\n"
              << **q <<"\n"
              << ***r << std::endl;

    ***r = 20;
    std::cout << a << std::endl;

    **q = *p + 5;
    std::cout << a << std::endl;
    
}