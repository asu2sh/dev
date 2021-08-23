#include <iostream>
#include <cmath>

long int numOfDigits(long int n){
    return floor(log10(n) + 1);
}

int main(){
    long int l;
    std::cin >> l;
    std::cout << numOfDigits(l) << std::endl;
}