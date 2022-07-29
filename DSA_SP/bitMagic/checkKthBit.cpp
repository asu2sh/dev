#include<iostream>

bool checkBit(int n, int k){

    return (n  & (1 << (k-1)));
}

int main(){

    int n, k;
    std::cin >> n >> k;
    std::cout << checkBit(n, k) << std::endl;
}

// return ((n >> (k-1)) & 1);
// using rightshift