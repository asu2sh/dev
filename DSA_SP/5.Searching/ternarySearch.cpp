#include <iostream>

int ternarySearch(int arr[], int n, int k){

    int low = 0, high = n-1;

    while(low <= high){

        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;

        if(arr[mid1] == k)  return mid1;
        if(arr[mid2] == k)  return mid2;

        if(k < arr[mid1])
            high = mid1 + 1;
        
        else if(k > arr[mid2])
            low = mid2 + 1;
        
        else{

            low = mid1 + 1;
            high = mid2 - 1;
        }
    }
    return -1;
}

//* Steps to perform Ternary Search:
// First, we compare the key with the element at mid1. If found equal, we return mid1.
// If not, then we compare the key with the element at mid2. If found equal, we return mid2.
// If not, then we check whether the key is less than the element at mid1. If yes, then recur to the first part.
// If not, then we check whether the key is greater than the element at mid2. If yes, then recur to the third part.
// If not, then we recur to the second (middle) part.

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int k;
    std::cin >> k;
    std::cout << ternarySearch(arr, n, k);
}