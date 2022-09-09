#include <iostream>
#include <algorithm>

int minDiff(int arr[], int n){

    std::sort(arr, arr+n);

    int res = INT_MAX;

    for(int i=1; i<n; ++i)
        res = std::min(res, arr[i] - arr[i-1]);

    return res;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    std::cout << minDiff(arr, n);
}