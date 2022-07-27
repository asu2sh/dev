#include <iostream>

void primeFactors(int n){

    if(n==1)    return;

    for(int i=2; i*i <= n; i++){
        while(n%i==0){
            std::cout << i << std::endl;
            n = n/i;
        }
    }
    if(n>1)     std::cout << n << std::endl;
    // this case is used when lets say n = 13, the loop will run till sqrt of 13
    // but the result will be 13 itself hence the loop ain't printing a thing
}

int main(){

    int n;
    std::cin >> n;
    primeFactors(n);
}