#include <iostream>

template <class T1, class T2>  // instead of typename keyword can use class
auto getMax(T1 x, T2 y){
    return x > y ? x : y;
}
// instead of creating class RT & passing the data type while calling, we can use auto

int main(){

    int x = 69, y = 77;
    std::cout << getMax(x, y) << std::endl;
    // no need to provide datatype; compiler will automatically deduce that for you

    char c1 = 'a', c2 = 'x';
    std::cout << getMax(c1, c2) << std::endl;
    // no need to cast too

    std::cout << getMax(45, 69.5) << std::endl;
    std::cout << getMax(13.26, 25) << std::endl;
}