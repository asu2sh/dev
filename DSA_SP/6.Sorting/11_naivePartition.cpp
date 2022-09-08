#include <iostream>

void partitionFn(int arr[], int n, int p){

    int temp[n];
    int idx = 0;

    for(int i=0; i<n; ++i){
        if(arr[i] <= arr[p]){
            temp[idx] = arr[i];
            idx++;
        }
    }

    for(int i=0; i<n; ++i){
        if(arr[i] > arr[p]){
            temp[idx] = arr[i];
            idx++;
        }
    }

    for(int i=0; i<n; ++i){
        arr[i] = temp[i];
        std::cout << arr[i] << " ";
    }
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int p;
    std::cin >> p;

    partitionFn(arr, n, p);
}