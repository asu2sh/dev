#include <iostream>
#include <vector>
#include <sstream>
// #include <string>

template <typename T>
T addAll(std::vector<T> list){
    T count = 0;
    for(auto elem: list)
        count += elem;
    return count;
}

template <>
std::string addAll(std::vector<std::string> list){
    int count = 0;
    for(const std::string& elem: list)
        for(const char& chr: elem)
            count += chr;
    
    std::ostringstream ostr;
    ostr << count;
    std::string strCount = ostr.str();

    // std::string strCount = std::to_string(count);
    return strCount;
}

int main(){

    std::vector<int> vecInt = {1, 2, 3, 4, 5};
    std::vector<double> vecDouble = {1.0, 2.0, 3.14};
    std::vector<std::string> vecString = {"abc", "bcd", "cde"};

    std::cout << addAll(vecInt) << std::endl;
    std::cout << addAll(vecDouble) << std::endl;
    std::cout << addAll(vecString) << std::endl;

    return 0;
}