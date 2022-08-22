#include <iostream>

bool checkSorted(int arr[], int n){

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}

int main(){

    int n;
    std::cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    std::cout << checkSorted(arr, n);
}