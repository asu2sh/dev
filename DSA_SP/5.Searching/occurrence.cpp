#include <iostream>

int firstOccurrence(int arr[], int n, int x){

    int low = 0, high = n-1;

    int res = 0;

    while(low <= high){
            
        int mid = (low+high)/2;

        if(arr[mid]>x)
            high = mid - 1;
        
        else if(arr[mid]<x)
            low = mid + 1;
        
        else{
            if(mid==0 || arr[mid-1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int lastOccurrence(int arr[], int n, int x){

    int low = 0, high = n-1;

    int res = 0;

    while(low <= high){
            
        int mid = (low+high)/2;

        if(arr[mid]>x)
            high = mid - 1;
        
        else if(arr[mid]<x)
            low = mid + 1;
        
        else{
            if(mid==n-1 || arr[mid+1] != arr[mid])
                return mid;
            else
                low = mid + 1;
        }
    }

    return -1;
}

int countOfOccurrence(int arr[], int n, int x){

    int first = firstOccurrence(arr, n, x);
    int last = lastOccurrence(arr, n, x);
    if(first ==  -1)
        return 0;
    else
        return last - first + 1;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int x;
    std::cin >> x;
    
    std::cout << firstOccurrence(arr, n, x) << " " << lastOccurrence(arr, n, x);
    std::cout << "\tCount: " << countOfOccurrence(arr, n, x);
}