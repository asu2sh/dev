#include <iostream>

int 



int main(){

    int n;
    std::cin >> n;
    std::cout << zeroCount(n) << std::endl;
}


//? Naive Approach: won't work for example for n=100, Output= 24 trailing zeros.
//? therefore, finding factorial is not possible.
// int zeroCount(int n){

//     int res = 1;
//     while(n>0){
//         res *= n;
//         n--;
//     }

//     int count = 0;
    
//     while(res%10==0){
//         res = res/10;
//         count++;
//     }

//     return count;
// }