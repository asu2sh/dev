#include <iostream>

int zeroCount(int n){

    int res = 1;
    while(n>0){
        res *= n;
        n--;
    }

    int count = 0;
    while(res%10==0)
        count++;
    
    return count;
}


int main(){

    int n;
    std::cin >> n;
    std::cout << zeroCount(n) << std::endl;
}