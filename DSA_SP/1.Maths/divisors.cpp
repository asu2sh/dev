#include <iostream>

/**
 * We start with `i=1` and increment it until `i*i` is greater than `n`. 
 * 
 * Then we decrement `i` until it is less than `1`. 
 * 
 * At each step, we check if `n` is divisible by `i`. 
 * 
 * If it is, we print `i` and `n/i`. 
 * 
 * The reason we do this is because if `n` is divisible by `i`, then `n/i` is also a divisor of `n`. 
 * 
 * For example, if `n=12` and `i=2`, then `n/i=6` is also a divisor of `n`. 
 * 
 * The reason we do the first loop is to find all the divisors that are less than the square root of
 * `n`. 
 * 
 * The reason we do the second loop is to find all the divisors that are more than the sqrt of n
 * 
 * @param n the number to find the divisors of
 */
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