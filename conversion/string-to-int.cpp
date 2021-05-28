#include <iostream>
#include <string>

int main() {

    std::string str = "123";
    int num;

    num = std::stoi(str);

    std::cout << num;
    
    return 0;

}