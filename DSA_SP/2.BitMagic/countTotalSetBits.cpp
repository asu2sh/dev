#include <iostream>    
#include <cmath>
    
int countSetBits(int n){
        
    int x = floor(log2(n));     // finding maxm powerof2 or MSB
        
    int countTillMsb = pow(2, x-1) * x;
    int countAfterMsb = n - pow(2, x) + 1;
    int reNum = n - pow(2, x);
        
    if(n==0)
        return 0;
    return countTillMsb + countAfterMsb + countSetBits(reNum);
}

int main(){

    int n;
    std::cin >> n;
    std::cout << countSetBits(n);
}


//* O(n) : O(1)
// int res = 0;
    
//     for(int i=1; i<=n; i++){
        
//         int x = 0;
//         int count = 0;
        
//         while(x<32){
//             if(i & (1 << x))
//                 count++;
//             x++;
//         }
//         res += count;
//     }

//     return res;

// //* O(n) : O(n) : print set bit of all no. from 0 to n
// std::vector<int> arr(n+1);
        
// arr[0] = 0;
        
// for(int i=1; i<=n; ++i)
//     arr[i] = arr[i/2] + i%2;
//  
// return arr;

