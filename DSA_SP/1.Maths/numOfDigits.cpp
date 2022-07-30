#include <iostream>
#include <cmath>

int numOfDigits(int);

int main(){

    int n;
    std::cin >> n;
    std::cout << numOfDigits(n) << std::endl;
}

// Logarithmic Solution:
int numOfDigits(int n){
    return std::floor(log10(n)) + 1;
}

//! Naive Approach:
// int numOfDigits(int n){
//     int count = 0;
//     while(n!=0){
//         n /=10;
//         ++count;
//     }
//     return count;
// }

//! Recursive Solution:
// int numOfDigits(int n){
//     if(n==0)
//         return 0;
//     else
//         return 1 + numOfDigits(n/10);
// }