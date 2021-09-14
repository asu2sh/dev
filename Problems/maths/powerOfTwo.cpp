#include <iostream>

bool isPower(int n){

    // if(n == 0)
    //     return false;
    
    // while(n != 1)
    // {
    //     if(n % 2 != 0)
    //         return false;
    //     n = n/2;
    // }
    
    // return true;

    //* Brian Kerningham Algorithm: 
    // power of two must have only 1 set bits obviously :)

    if(n == 0)
        return false;
    
    return((n & (n-1)) == 0);

}

int main(){

    int num;
    std::cin >> num;
    std::cout << isPower(num) << std::endl;

}