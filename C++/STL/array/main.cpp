//! Syntax:
//*          std::array<T, N> array;
// where T is type, and N is size of the array

// 1. std::array is a container that encapsulates fixed size arrays.
// 2. arraysize is needed at compile time.
// 3. Assign by value is actually by value.
//!     Access Elements:
//      a. at()
//      b. []
//      c. front()
//      d. back()
//      e. data()   // gives access to the underlying data


#include <iostream>
#include <array>

int main(){

    std::array<int, 5> arr {1, 2, 3, 4, 5}; 
    // uniform initialization
    
    // assign using initializer list
    std::array<int, 3> arr2;
    arr2 = {3, 2, 1};

    std::cout << arr.at(0)
              << arr.at(4)
              << arr[5]
              << std::endl;
    
    std::cout << arr.front()
              << arr.back()
              << std::endl;

    std::cout << arr.data() << std::endl;

    arr2.fill(10);  // fills every place by the given element
    std::cout << arr2.at(1) << std::endl;

    return 0;
}