#include <iostream>

int pow(int n, int e){

    int res = 1;

    // while(e > 0){
    //     res = res * n;
    //     e--;
    // }

    while(e > 0){
        // if(e % 2 != 0)
        if(e & 1)
            res = res * n;
        n = n * n;
        // e = e / 2;
        e = e >> 1;
    }
    //* Time complexity: O(log n)
    
    return res;
}

int main(){

    int num, exp;
    std::cin >> num >> exp;
    std::cout << pow(num, exp) << std::endl;
}