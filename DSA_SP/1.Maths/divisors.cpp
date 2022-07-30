#include <iostream>

void divisors(int n){

    int i=1;
    for(; i*i<n; ++i){
        if(n%i==0)
            std::cout << i << std::endl;
    }
    
    for(; i>=1; --i){
        if(n%i==0)
            std::cout << n/i << std::endl;
    }
}

int main(){

    int n;
    std::cin >> n;
    divisors(n);
}