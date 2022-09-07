#include <iostream>

class Base {
    int x;

public:
    Base(){
        std::cout << "Default Constructor" << std::endl;
    }
    
    Base(int a) {
         x = a;
         std::cout << "Parameterized Constructor" << std::endl;
    }

    ~Base(){
        std::cout << "Destructor" << std::endl;
    }

};

int main(){

    Base b;
}
