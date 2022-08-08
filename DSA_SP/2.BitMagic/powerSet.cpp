/**
 * For each bit in the binary representation of the number from 0 to 2^n, print the character at the
 * index of the bit if the bit is set
 * 
 * @param str The string whose power set is to be found.
 * @param n length of the string
 */
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