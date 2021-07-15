#include <iostream>

int main() {
  
    int numArray[] = {1, 2, 3, 4, 5};

    for (const int &n : numArray) { 
// if we are not modifying the array/vector/collection within the loop,
// it is better to use the const keyword in range declaration.
        std::cout << n << " ";
    }
    std::cout << '\n';
  
    return 0;
}

// (int var : num) --> copies each element of num to var variable in each iteration.
//                 --> not good for computer memory.
// (int &var : num) --> Does not copy each element of num to var, instead
//                  --> access the elements of num from num itself. === more efficient.