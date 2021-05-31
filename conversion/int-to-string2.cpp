#include <iostream>
#include <string>

#include <sstream>
//for using stringstream

int main() {
    
    int num = 69;

    //creating stringstream object ss
    std::stringstream ss;

    //assigning the value of num to ss
    ss << num;

    //intializing string variable with the value of ss
    //& converting it to string format with str() function
    std::string strNum = ss.str();

    std::cout << strNum << std::endl;

    return 0;

}