#include <iostream>
#include <string>

int main(){

    std::string str;
    std::cin >> str;
    std::string rev = std::string(str.rbegin(),str.rend());
    char a = str[0];
    char b = rev[0];
    int first = a - 48;
    int last = b - 48;
    int result = first * last;
    std::cout << "Result:"<< result << std::endl;
}