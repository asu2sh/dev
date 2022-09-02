#include <iostream>
#include <vector>

/**
 * We XOR all the elements of the array, and then find the rightmost set bit in the XOR result. 
 * 
 * We then divide the array into two parts, one with elements having the rightmost set bit, and the
 * other with elements not having the rightmost set bit. 
 * 
 * We then XOR all the elements in each of the two parts, and the two XOR results are the two numbers
 * that occur odd number of times
 * 
 * @param arr The array in which the two numbers are present.
 * @param n size of the array
 */

void twoOddOccuring(std::vector<int> arr, int n){

    int X = 0, res1 = 0, res2 = 0;
    
    for(int i=0; i<n; i++)  
        X = X ^ arr[i];

    int setBit = X & ~(X-1);     // Right Most Set Bit 

    for(int i=0; i<n; i++){
        
        if(arr[i] & setBit)
            res1 ^= arr[i];
        else
            res2 ^= arr[i];
    }

    std::cout << res1 << "\t" << res2;
}

int main(){

    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    twoOddOccuring(arr, n);
}