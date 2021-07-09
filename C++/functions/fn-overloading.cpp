#include <iostream>

float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

int absolute(int var){
    if (var < 0)
        var = -var;
    return var;
}

int main(){

    std::cout << absolute(-5) << std::endl;
    std::cout << absolute(-5.5f) << std::endl;

    return 0;
}