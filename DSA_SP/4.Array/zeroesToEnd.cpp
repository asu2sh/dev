#include <iostream>

void moveZeroes(int arr[], int n){

    int idx = 0;
    for(int i=0; i<n; ++i){
        
        if(arr[i] != 0){
            arr[idx] = arr[i];
            if(i>idx)
                arr[i] = 0;
            // std::swap(arr[i], arr[idx]);
            idx++;
        }
    }

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

int main(){

    int n;
    std::cin >> n;

    int arr[n];
    for(int i=0; i<n; ++i)
        std::cin >> arr[i];

    moveZeroes(arr, n);
}