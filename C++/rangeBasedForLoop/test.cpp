#include <iostream>
#include <array>

int main() {
  
    int numArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    for (auto n : numArray) {
        std::cout << n << " ";
    }
    std::cout << '\n';

    // Syntax:
    //for (variable : collection) {
    // // body of loop
    // }
    // Here, for every value in the collection,
    // the for loop is executed and the value is assigned to the variable.

    return 0;
}