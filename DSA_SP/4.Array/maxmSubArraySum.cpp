#include <iostream>

//? Kadane's Algorithm
void maxSubSum(int arr[], int n){

    int max = arr[0];
    int res = arr[0];   // res can't be INT_MIN 

    for(int i=1; i<n; ++i){
        max = std::max(max + arr[i], arr[i]);
        res = std::max(res, max);
    }
    std::cout << res;
}

//! Naive Approach: O(n^2)
// void maxSubSum(int arr[], int n){

//     int res = INT_MIN;
//     for(int i=0; i<n; i++){
//         int max = 0;
//         for(int j=i; j<n; j++){ 
//             max = max + arr[j];
//             res = std::max(res, max);
//         }
//     }
//     std::cout << res;
// }

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    maxSubSum(arr, n);
}