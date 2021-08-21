//!   Syntax:
// *         std::vector<T> name; 

// 1. std::vector is a sequence container also known as Array List or Dynamic Array.
// 2. Its size can grow & shrink dynamically.

//!     Access Elements:
//      at(), [], front(), back(), data()

//!     Modifiers:
//      insert(), emplace(), push_back(), emplace_back(), pop_back()
//      resize(), swap(), erase(), clear()

#include <iostream>
#include <vector>

int main(){

    std::vector<int> arr1;
    std::vector<int> arr2 (5, 20);  // create an array of size 5 & insert 20 in all places
    std::vector<int> arr3 {1, 2, 3, 4, 5};   // uniform initialization

    arr2[3] = 10;
    arr2.at(4) = 15;    // exception safe

    std::cout << arr3.capacity() << std::endl;
    std::cout << arr3.size() << std::endl;
    arr3.push_back(6);
    std::cout << arr3.capacity() << std::endl;
    std::cout << arr3.size() << std::endl;

    return 0;
}




