#include <iostream>
#include <cmath>

int gcd(int n1, int n2){

    //* Using Euclidean Algorithm:
    // while(n1 != n2){
    //     if(n1 > n2)
    //         n1 -= n2;
    //     else
    //         n2 -= n1;
    // }
    // return n1;

    //* Using Optimised Euclidean Algorithm:
    if(n2 == 0)
        return n1;
    else
        return gcd(n2, n1 % n2);
    
    //* Solution 1:
    // int res = std::min(n1, n2);
    // while(res > 0){
    //     if(n1 % res == 0 && n2 % res == 0)
    //         break;
    //     res--;
    // }
    // return res;
    
    //* Solution 2:
    // int result = 0;
    // if(n1 <= n2){
    //     for(int i = n1; i > 0; --i){
    //         if(n2 % i == 0 && n1 % i == 0){
    //             result += i;
    //             break;
    //         }
    //         else
    //             continue;
    //     }
    // }
    // else{
    //     for(int i = n2; i > 0; --i){
    //         if(n1 % i == 0 && n2 % i == 0){
    //             result += i;
    //             break;
    //         }
    //         else
    //             continue;
    //     }
    // }
    // return result;

}

int main(){

    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << gcd(num1, num2) << std::endl;
}