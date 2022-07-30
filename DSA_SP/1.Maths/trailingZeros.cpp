#include <iostream>

int zeroCount(int n){

    int count=0;
    for(int i=5; i<=n; i*=5){
        count = count + n/i;
    }
    
    return count;
}

int main(){

    int n;
    std::cin >> n;
    std::cout << zeroCount(n) << std::endl;
}

//? Naive Approach: won't work for example for n=100, Output= 24 trailing zeros.
//? therefore, finding factorial is not possible.