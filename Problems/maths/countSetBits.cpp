#include <iostream>

int countBits(int n){

    int count = 0;
    // for(int i=0; i<=n; i++){
    //     if((n & (1 << i)) != 0)
    //         count++;
    // }

    //* Brian Kerningham Algorithm
    while(n > 0)
    {
        n = (n & (n-1));
        count ++;
    }
    return count;
}

int main(){

    int num;
    std::cin >> num;
    std::cout << countBits(num) << std::endl;

}