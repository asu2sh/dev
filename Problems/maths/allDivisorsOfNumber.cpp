#include <iostream>

void divisorsOfNum(int n){

    int i;
    for(i = 1; i*i < n ; ++i)
        if(n % i == 0) std::cout << i << std::endl;

    for(; i >= 1; --i)
        if(n % i == 0) std::cout << n / i << std::endl;
}

int main(){

    int num;
    std::cin >> num;
    divisorsOfNum(num);
}