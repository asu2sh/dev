#include <iostream>
#include <string>

#include <sstream>

int main(){

    float numFloat = 420.6969F;
    double numDouble = 420.5678;

    //creating stringstream objects
    std::stringstream ss1;
    std::stringstream ss2;

    //assigning the value
    ss1 << numFloat;
    ss2 << numDouble;

    std::string str1 = ss1.str();
    std::string str2 = ss2.str();

    std::cout << str1 << "\n" << str2 << std::endl;

    return 0;
}