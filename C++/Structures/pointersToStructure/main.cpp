#include <iostream>

struct Distance{

    int feet;
    float inch;
};

int main(){

    Distance d;
    Distance* ptr;

    ptr = &d;

    std::cout << "Enter feet: ";
    std::cin >> ptr->feet;         

    // *ptr.var != (*ptr).var
    // more preferable to access class members using the -> operator
    // the . operator has a higher precedence than the * operator

    std::cout << "Enter inch: ";
    std::cin >> (*ptr).inch;

    std::cout << "\nDisplaying Information." << std::endl;
    std::cout << "Distance = " << (*ptr).feet << "feet " << ptr->inch << "inches." << std::endl;



}