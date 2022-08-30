#include <iostream>

int iterativeBS(int arr[], int n, int x){

    int low = 0, high = n-1;

    while(low <= high){

        int mid = (low+high)/2;

        if(arr[mid]==x)
            return mid;
        
        if(arr[mid]>x)
            high = mid - 1;
        
        if(arr[mid]<x)
            low = mid + 1;
    }
    return -1;
}

int main(){

    int n, x;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];

    std::cin >> x;
    
    std::cout << iterativeBS(arr, n, x);
}