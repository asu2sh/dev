#include <iostream>

void bubbleSort(int arr[], int n){

    bool swapped = false;
    for(int i=0; i<n-1; ++i){   // -1 for n-1 passes

        for(int j=0; j<n-1-i; ++j){ // -i  for not iterating the bubble & -1 is due to comparison with i+1

            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)    break;  // for checking if arr is already sorted or half sorted
    }

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

// O(n^2) : O(1)
// Inplace
// Stable

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    bubbleSort(arr, n);
}