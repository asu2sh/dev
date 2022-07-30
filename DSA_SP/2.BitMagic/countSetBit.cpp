#include <iostream>

int countSetBit(int n){

    int count = 0;
    int x = 0;

    while(x<32){
        if(n & (1 << x))
            count++;
        x++;
    }

    return count;
}

int main(){

    int n;
    std::cin >> n;
    std::cout << countSetBit(n) << std::endl;
}

//* Brian-Kerningham Algorithm:
// while(n!=0){
//     n = n & (n-1);
//     count++;
// }
// return count;