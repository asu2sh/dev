#include <iostream>

int main(){

        std::string str;
        
        std::cout << "Enter your Name : "<< std::endl;

        getline(std::cin, str);

        std::cout << "Press F to pay respects." << std::endl;

        char ch;
        std::cin >> ch;

        ch == 'F' ? std::cout << "Mr. " << str << " ,RESPECT for you." << std::endl
                  : std::cout << "F YOU " << str << " beep* beep* beep*" << std::endl;

}