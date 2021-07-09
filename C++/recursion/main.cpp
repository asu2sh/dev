#include <iostream>

int factorial(int);

int main(){

    int var, result ;

    std::cout << "Enter a +ve integer :" << std::endl;
    std::cin >> var;

    result = factorial(var);

    std::cout << "Result = " << result << std::endl;
}

int factorial(int n){

    if (n>1)
        return n * factorial(n-1);
    else 
        return 1;

}