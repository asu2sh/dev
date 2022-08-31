#include <iostream>

int peakElement(int arr[], int n){

    int low = 0, high = n-1;

    while(low<=high){

        int mid = (low+high)/2;

        if((mid==0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1] <= arr[mid]))
            return mid;
        
        else if(mid>0 && arr[mid-1] >= arr[mid])
            high = mid - 1;
        
        else
            low = mid + 1;
    }
    return -1;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    std::cout << peakElement(arr, n);
}