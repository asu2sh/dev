#include <iostream>

// int factorial(int n){

//     if(n==1)
//         return 1;
//     else
//         return n * factorial(n-1);
// }
// The Iterative solution is better because this Recursive Solution takes O(n) auxiliary space
// as the function call stack is filled with n+1 calls.

int factorial(int n){

    int res = 1;
    while(n>0){
        res = res * n;
        n--;
    }
    return res;
}

int main(){

    int n;
    std::cin >> n;
    std::cout << factorial(n) << std::endl;
}