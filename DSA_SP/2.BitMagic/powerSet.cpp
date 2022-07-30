#include <iostream>
#include <cmath>

void powerSet(std::string str, int n){

    int powSize = pow(2, n);

    for(int i=0; i<powSize; i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j) != 0)
                std::cout << str[i];
        }
        std::cout << "\n";
    }
}

int main(){

    std::string str;
    std::cin >> str;

    int n = str.length();
    powerSet(str, n);
}