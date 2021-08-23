#include <iostream>

int reverseNum(int n){

    int revNum = 0;
    while(n != 0){
        revNum = revNum * 10 + n % 10;
        n = n / 10;
    }
    return revNum;
}

int main(){

    int num;
    std::cin >> num;
    std::cout << reverseNum(num) << std::endl;
}