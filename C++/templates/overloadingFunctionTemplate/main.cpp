#include <iostream>

int const& getMax(int const& x, int const& y){
    std::cout << "getMax(int, int)" << std::endl;
    return x > y ? x : y;
}

template <typename T>
T const& getMax(T const& x, T const& y){
    std::cout << "getMax(T, T)" << std::endl;
    return x > y ? x : y;
}

template <typename T>
T const& getMax (T const& a, T const& b, T const& c){
    std::cout << "getMax(T, T, T)" << std::endl;
    return getMax(getMax(a, b), c);
}

int main(){

    getMax(10.0, 13.3);
    getMax('a', 'b');
    getMax<>(10, 20);
    getMax<double>(10.7, 13.33);
    getMax(10, 20, 30);

    // if the function name was max instead of getMax
    //  we have to specify that we were using the global one which we defined 
    // as max exists in stl, to do that in main we use :: scope resolution operator.
    // ::max(); like this
}