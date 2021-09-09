#include <iostream>
#include <cmath>

void lastCard(int n){

    int count = 0;
    while(n > pow(2, count))
        count++;
    
    int gNum = pow(2, count);
    
    int result;
    result = gNum - ((gNum - n)*2);
    
    // return result;
    std::cout << result << " Iteration: " << count << std::endl;
}

int main(){

    int num;
    std::cin >> num;
    // std::cout << lastCard(num) << std::endl;
    lastCard(num);
}