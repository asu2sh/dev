#include <iostream>

int trailingZeros(int n){

    //* time complexity: O(n)
    // int fact = 1, count = 0;
    // while(n != 0){
    //     fact = fact * n;
    //     n--;
    // }
    // while(fact % 10 == 0){
    //     count ++;
    //     fact /= 10;
    // }
    // return count;

    //* time complexity: theta(log n)
     int res = 0;
     for(int i = 5; i <= n; i = i * 5){
         res = res + n / i;
     }
     return res;
}

int main(){

    int num;
    std::cin >> num;
    std::cout << trailingZeros(num) << std::endl;
}