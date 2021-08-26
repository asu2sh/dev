#include <iostream>

bool checkBit(int n, int k){

    if(n & (1 << (k-1)) != 0)
        return true;
    else return false;

}

int main(){

    int num, k;
    std::cin >> num >> k;
    std::cout << checkBit(num, k) << std::endl;
}