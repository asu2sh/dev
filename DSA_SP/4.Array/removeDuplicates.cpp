#include <iostream>

void removeDuplicates(int arr[], int n){

    int idx = 1;

    for(int i=1; i<n; ++i){
        if(arr[i] != arr[idx-1]){
            arr[idx] = arr[i];
            idx++;
        }
    }

    for(int i=0; i<n; ++i)
        std::cout << arr[i];
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];

    removeDuplicates(arr, n);
}

//! Auxiliary Space: O(n)
// void removeDuplicates(int arr[], int n){

//     int resArr[n];
//     int j=0;
    
//     for(int i=0; i<n; ++i){
//         if(arr[i] != arr[i+1]){
//             resArr[j] = arr[i];
//             j++;
//         }
//     } 

//     for(int i=0; i<n; ++i)
//         std::cout << resArr[i] << " ";
// }