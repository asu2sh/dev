#include <iostream>
#include <string>

int main(){

    std::string str = "69420.1762";

    //converting to float
    float numFloat = std::stof(str);
    
    //converting to double 
    double numDouble = std::stod(str);

    std::cout << "numFloat = " << numFloat << std::endl;
    std::cout << "numDouble = " << numDouble << std::endl;

    return 0;

}