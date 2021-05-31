#include <iostream>
#include <string>

int main() {

    float numFloat = 420.69F;
    double numDouble = 420.4567;

    std::string str1 = std::to_string(numFloat);
    std::string str2 = std::to_string(numDouble);

    std::cout << str1 << "\n" << str2 << std::endl;

    return 0;
    
}