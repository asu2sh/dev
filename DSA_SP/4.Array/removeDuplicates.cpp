#include <iostream>

void removeDuplicates(int arr[], int n){

    for(int i=0; i<n-1; ++i){
        if(arr[i] == arr[i+1])
            
    }
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];

    removeDuplicates(arr, n);
}