#include <iostream>

int main(){

    int A[5] = {4, 3, 9, 5, 2};

    int* p = A;
    //int* p = &A[0];

    std::cout << A << "\n" 
              << *A << "\n"
              << std::endl;

    std::cout << p << "\n"
              << *p << "\n"
              << std::endl;

    std::cout << p+1 << "\n"
              << *(p+1)  
              << std::endl;
}