// Count 1s in a Sorted Binary Array
#include <iostream>

int count1s(int arr[], int n){

    if(arr[0] == 1)
        return n;
    
    int low = 0;
    int high = n-1;

    while(low <= high){

        int mid = (low+high)/2;

        if(arr[mid] == 0)
            low = mid + 1;

        else if(arr[mid] == 1 && arr[mid-1] == 0)
            return n-mid;

        else
            high = mid - 1;
    }
    return 0;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    std::cout << count1s(arr, n);
}