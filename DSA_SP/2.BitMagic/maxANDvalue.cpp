#include <iostream>
#include <vector>
/**
 * We start with the most significant bit and check if it is possible to have a bit set at that
 * position in the result. If it is possible, we set the bit at that position in the result and move on
 * to the next bit. If it is not possible, we don't set the bit at that position in the result and move
 * on to the next bit
 * @return The maximum AND value of any two elements in the array.
 */
int maxAND (std::vector<int> arr, int n){
        
    int pattern = 0;
    int res = 0;
        
    for(int i=31; i>=0; i--){
            
        pattern = res | (1 << i);
            
        int count = 0;   
        for(int j=0; j<n; j++){
            if((pattern & arr[j]) == pattern)
                count++;
        }
            
        if(count >= 2)
            res = res | (1 << i);
    }
    return res;
}

int main(){

    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    std::cout << maxAND(arr, n);
}





// int maxAND(std::vector<int> arr, int n){

//     int max = 0;
//     int temp = 0;

//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){

//             temp = arr[i] & arr[j];
//             if(max<temp){
//                 max = temp;
//             }
//         }
//     }
//     return max;
// }