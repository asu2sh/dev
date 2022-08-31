#include <iostream>

int resIndex(int arr[], int n, int x){

    int low = 0, high = n-1;
    
    while(low <= high){

        int mid = (low+high)/2;

        if(arr[mid]==x) 
            return mid;

        else if(arr[mid] > arr[low]){
            
            if(x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else{

            if(x > arr[mid] && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int x;
    std::cin >> x;

    std::cout << resIndex(arr, n, x);
}