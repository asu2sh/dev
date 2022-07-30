#include <iostream>

bool powerOfTwo(int n){
    
    if(n==0)    return false;   //corner case :)

    if(n & (n-1))
        return false;
    return true;
}

int main(){

    int n;
    std::cin >> n;
    std::cout << powerOfTwo(n);
}