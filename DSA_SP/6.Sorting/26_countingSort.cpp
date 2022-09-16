#include <iostream>

// Naive
void countingSort(int arr[], int n, int k){

    int count[k] = {0};

    for(int i=0; i<n; ++i)
        count[arr[i]]++;

    int idx = 0;

    for(int i=0; i<k; ++i){
        for(int j=0; j<count[i]; ++j){
            arr[idx] = i;
            idx++;
        }
    }

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

// Also works for objects
void countSort(int arr[], int n, int k){

    int count[k] = {0};

    for(int i=0; i<n; ++i)
        count[arr[i]]++;

    for(int i=1; i<k; ++i)
        count[i] = count[i] + count[i-1];

    int output[n];

    //for stability we are iterating from n-1 to 0
    for(int i=n-1; i>=0; --i)
        output[--count[arr[i]]] = arr[i];

    for(int i=0; i<n; ++i){
        arr[i] = output[i];
        std::cout << arr[i] << " ";
    }

}

int main(){

    int n, k;
    std::cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    // countingSort(arr, n, k);
    countSort(arr, n, k);
}

