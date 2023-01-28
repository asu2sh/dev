#include <iostream>

int sticklerThief(int arr[], int n){

    int temp[n];
    temp[0] = arr[0];
    temp[1] = std::max(arr[0], arr[1]);

    for(int i=2; i<n; ++i)
        temp[i] = std::max(arr[i] + temp[i-2], temp[i-1]);

    return temp[n-1];
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    std::cout << sticklerThief(arr, n) << std::endl;
}