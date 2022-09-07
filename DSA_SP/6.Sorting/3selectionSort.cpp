#include <iostream>

// O(n^2) : O(n)
void selectionSort(int arr[], int n){

    int temp[n];

    for(int i=0; i<n; ++i){
        int minIdx = 0;
        for(int j=1; j<n; ++j){
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        temp[i] = arr[minIdx];
        arr[minIdx] = INT_MAX;
    }

    for(int i=0; i<n; ++i)
        arr[i] = temp[i];


    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

// In Place Approach:   O(n^2) : O(1)
void SelectionSort(int arr[], int n){

    for(int i=0; i<n-1; ++i){
        int minIdx = i;
        for(int j=i+1; j<n; ++j){
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        std::swap(arr[minIdx], arr[i]);
    }

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    //selectionSort(arr, n);
    SelectionSort(arr, n);
}