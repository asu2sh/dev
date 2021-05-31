#include <iostream>
#include <string>

int main() {
    int num = 123;

    //int to string using ---> to_string()
    
    std::string str = std::to_string(num);

    std::cout << str;

    return 0;
}