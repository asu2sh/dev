// maxm circular subarray sum
#include <iostream>

int normalMaxSum(int arr[], int n){

    int max = arr[0];
    int res = arr[0];  
    // res can't be INT_MIN as if only 1 element is present or arr[0] is the only +ve element in the array

    for(int i=1; i<n; ++i){
        max = std::max(max + arr[i], arr[i]);
        res = std::max(res, max);
    }
    return res;
}

void overallMaxSum(int arr[], int n){

    int maxNormal = normalMaxSum(arr, n);

    if(maxNormal < 0){
        std::cout << maxNormal;
        return;
    }

    int totalSum = 0;

    for(int i=0; i<n; ++i){
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    
    int maxCircular = normalMaxSum(arr, n) + totalSum;

    std::cout << std::max(maxNormal, maxCircular); 
}

//! Naive Approach: O(n^2)
// void leftRotate(int arr[], int n, int k=1){

//     int temp = arr[0];

//     for(int i=1; i<n; ++i){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
// }

// void maxSum(int arr[], int n){

//     int res = INT_MIN;
//     int x = n;

//     do{
//         int max = arr[0];
//         for(int i=1; i<n; ++i){
//             max = std::max(max + arr[i], arr[i]);
//             res = std::max(res, max);
//         }
//         leftRotate(arr, n);
//         x--;
//     }while(x!=1);

//     std::cout << res;
// }

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    overallMaxSum(arr, n);
}