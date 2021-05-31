#include <iostream>
#include <string>

#include <cstdlib>

int main(){

    char str[] = "420.69";

    double numDouble = std::atof(str);

    std::cout << "numDouble = " << numDouble << std::endl;
    
    return 0;


}