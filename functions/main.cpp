#include <iostream>

void greet(){

    std::cout << "Hello World :)" << std::endl;
}

void printNum(int num1, double num2){

    std::cout << num1 << "\n" << num2 << std::endl;
}

int main(){

    greet();

    int n = 69;
    double m = 420;
    
    printNum(n, m);

    return 0;
}