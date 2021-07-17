#include <iostream>

int main(){

    char str[100];

    std::cout << "Enter your Name : " << std::endl;

    std::cin.getline(str, 10);   //! don't use cin.get() use cin.getline() instead  
    // takes two arguments, 1st: name of the string i.e. address of the first element of the string.
    // 2nd: size of the array 
    // or the no. of characters you want to print, one space for NULL character.

    //std::cin >> str;

    std::cout << "My name is " << str << " ,The Real Slim Shady." << std::endl;
}