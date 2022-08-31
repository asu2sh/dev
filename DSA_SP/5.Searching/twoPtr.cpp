// If there is a pair with sum x in a sorted array
#include <iostream>

bool havePair(int arr[], int n, int x){

    int low = 0, high = n-1;
    
    while(low<high){

        if(arr[low]+arr[high]==x)   return true;
        
        else if(arr[low]+arr[high]>x)
            high--;
        else
            low++;
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
    std::cout << havePair(arr, n, x);
}