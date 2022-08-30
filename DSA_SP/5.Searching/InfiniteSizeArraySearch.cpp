// Unbounded Binary Search
#include <iostream>

int binarySearch(int arr[], int low, int high, int x){

    while(low <= high){

        int mid = (low+high)/2;

        if(arr[mid]==x)
            return mid;
        
        else if(arr[mid]<x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int infiniteSearch(int arr[], int x){

    if(arr[0]==x)   return 0;

    int i = 1;
    while(x > arr[i]){
        i = i*2;
        if(arr[i] == x)
            return i;
    }
    return binarySearch(arr, i/2, i, x);
}
// Time Complexity: O(log(position))

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int x;
    std::cin >> x;

    std::cout << infiniteSearch(arr, x); 
    // we are not passing n to replicate the situation of not knowing the size of the array
}