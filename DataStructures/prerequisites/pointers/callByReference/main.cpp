#include <iostream>

void Increment(int *p){

    *p = *p + 1;
}

int main(){

    int a = 10;

    Increment(&a);

    std::cout << a << std::endl;

}