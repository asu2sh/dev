#include <iostream>
#include <vector>

void leftRotate(int arr[], int n, int k){

    while(k>n)
        k = k-n;

    std::vector<int> resArr;

    for(int i=k; i<n; i++)  // k to n
        resArr.push_back(arr[i]);
    
    for(int i=0; i<k; i++)  // 0 to k
        resArr.push_back(arr[i]);


    for(int i=0; i<n; ++i)
        std::cout << resArr[i] << " ";
}

//! For left rotating array by 1
//? Auxiliary Space: O(1)
// void leftRotate(int arr[], int n, int k=1){

//     int temp = arr[0];

//     for(int i=1; i<n; ++i){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;

//     for(int i=0; i<n; ++i)
//         std::cout << arr[i] << " ";
// }

int main(){

    int n, k;
    std::cin >> n >> k;

    int arr[n];
    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    leftRotate(arr, n, k);
}