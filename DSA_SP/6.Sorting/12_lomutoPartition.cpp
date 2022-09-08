#include <iostream>

void lomuto(int arr[], int n){

    int pivot = arr[n-1];
    // if pivot is user input
    // swap(arr[pivot], arr[n-1]);

    int idx = -1;

    for(int i=0; i<n; ++i){
        
        if(arr[i] < pivot){
            idx++;
            std::swap(arr[i], arr[idx]);
        }
    }

    std::swap(arr[idx+1], arr[n-1]);

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    lomuto(arr, n);
}