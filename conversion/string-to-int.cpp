#include <iostream>
#include <string>

int main() {

    std::string str = "420xxx";
    int num;

    // using stoi() to store the value of str1 to x
    num = std::stoi(str);

    std::cout << num;

    return 0;
}