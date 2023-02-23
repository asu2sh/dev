#include <iostream>

int main(){
    int y = 3;
    int z, x;

    z = (--y) + (y=10);
    std::cout << z;

    // x = (y--) + (y=10);
    // std::cout << x;
}
