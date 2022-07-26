#include <iostream>

int factNum(int n){

    int fNum = 1;
    while(n > 0){
        fNum = fNum * n;
        n--;
    }
    return fNum;
}

int main(){

    int num;
    std::cin >> num;
    std::cout << factNum(num) << std::endl;
}