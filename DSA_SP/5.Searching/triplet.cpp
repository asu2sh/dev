#include <iostream>

bool havePair(int arr[], int n, int x, int si){

    int low = si, high = n-1;
    
    while(low<high){

        if(arr[low]+arr[high]==x)   return true;
        
        else if(arr[low]+arr[high]>x)
            high--;
        else
            low++;
    }
    return false;
}

bool haveTriplet(int arr[], int n, int x){

    for(int i=0; i<n-2; ++i){
        if(havePair(arr, n, x-arr[i], i+1))
            return true;
    }
    return false;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int x;
    std::cin >> x;
    std::cout << haveTriplet(arr, n, x);
}