#include <iostream>

int firstSetBit(int n){

        if(n==0)    return 0;

        int x = 0;
        while(x<32){            // ref: countSetBit
            if(n & (1 << x))
                break;
            x++;
        }
        return x+1;
}

int main(){

    int n;
    std::cin >> n;
    std::cout << firstSetBit(n);
}