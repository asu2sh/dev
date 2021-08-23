#include <iostream>
#include <string>
#include <algorithm>

int reverseNum(int n){

    std::string str = std::to_string(n);
    reverse(str.begin(), str.end());
    n = std::stoi(str);
    return n;
}

int main(){

    int num;
    std::cin >> num;
    std::cout << reverseNum(num) << std::endl;
}