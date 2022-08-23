#include <iostream>

void maxmDiff(int arr[], int n){

    int res = arr[1] - arr[0];
    int min = arr[0];

    for(int i=1; i<n; ++i){

        res = std::max(res, arr[i] - min);
        min = std::min(min, arr[i]);
    }

    std::cout << res;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    maxmDiff(arr, n);
}