#include <iostream>

int main() {
    char c;
    std::cout << "Enter a character: ";
    std::cin >> c;
    if((int)c <= 120 && (int)c >= 65)  
        std::cout << c << "-" << (int)c << std::endl;
    else
        std::cout << "Invalid" << std::endl;    
}