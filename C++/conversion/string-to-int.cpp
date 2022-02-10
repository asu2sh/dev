#include <iostream>
#include <string>

int main() {

    std::string str = "42013";
    int num;

    // using stoi() to store the value of str1 to x
    num = std::stoi(str);

    std::cout << num << std::endl;

    return 0;
}