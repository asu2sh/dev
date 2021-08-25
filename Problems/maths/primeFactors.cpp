#include <iostream>

void primeFactors(int n){

    if(n <= 1) std::cout << n << std::endl;
    for(int i = 2; i*i <=n; ++i){
        while(n % i == 0){
            std::cout << i << std::endl;
            n = n / i;
        }
    }
    if(n > 1)
        std::cout << n << std::endl;

}

int main(){

    int num;
    std::cin >> num;
    std::cout << primeFactors(num) << std::endl;

}