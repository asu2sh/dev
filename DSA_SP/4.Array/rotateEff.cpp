#include <iostream>

void rotate(int arr[], int low, int high){

    while(low < high){

        std::swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void leftRotate(int arr[], int n, int k){

    rotate(arr, 0, k-1);
    rotate(arr, k, n-1);
    rotate(arr, 0, n-1);

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

int main(){

    int n, k;
    std::cin >> n >> k;
    int arr[n];

    while(k>n)
        k = k-n;

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    leftRotate(arr, n, k);
}