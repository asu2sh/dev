#include <iostream>

bool isPrime(int n){

    if(n==1) return false;
    
    if(n==2 || n==3) return true;
    
    if(n%2==0 || n%3==0)  return false;
    
    for(int i=5; i*i<=n; i++){  // instead of sqrt(n) we wrote i*i ;)
        if(n%i==0)
            return false;
    }
    return true;

    // We got till the sqrt of n bcoz of the fact that 
    // for e.g. for n=49 sqrt(n)=7 and after 7 all the number that will divide 49 must have a pair
    // which will lie before the sqrt(n) :)
}

int main(){

    int n;
    std::cin >> n;
    std::cout << isPrime(n) << std::endl;
}