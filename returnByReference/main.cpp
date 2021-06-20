#include <iostream>

int num; //global variable

int& test(); //function declaration

int main(){

    test() = 5;

    std::cout << num << std::endl;

    return 0;

}

int& test(){
    
    return num;
}