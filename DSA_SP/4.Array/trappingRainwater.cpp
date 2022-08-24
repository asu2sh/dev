#include <iostream>

//! Time Complexity: O(n)   Auxiliary Space: O(n)
void trapped(int arr[], int n){

    int res = 0;
    int lmax[n];
    int rmax[n];

    lmax[0] = arr[0];
    for(int i=1; i<n; ++i)
        lmax[i] = std::max(lmax[i-1], arr[i]);
    
    rmax[n-1] = arr[n-1];
    for(int i=n-2; i>=0; --i)
        rmax[i] = std::max(rmax[i+1], arr[i]);
    
    for(int i=1; i<n-1; i++)
        res = res + (std::min(lmax[i], rmax[i]) - arr[i]);
    
    std::cout << res;
}

//! Time Complexity: O(n^2)    Auxiliary Space: O(1)
// void trapped(int arr[], int n){
    
//     int res = 0;
//     for(int i=1; i<n-1; ++i){

//         int lmax = arr[i];
//         for(int j=0; j<i; ++j)
//             lmax = std::max(lmax, arr[j]);
        
//         int rmax = arr[i];
//         for(int j=i; j<n; ++j)
//             rmax = std::max(rmax, arr[j]);
        
//         res = res + (std::min(lmax, rmax) - arr[i]);
//     }
//     std::cout << res;
// }

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    trapped(arr, n);
}