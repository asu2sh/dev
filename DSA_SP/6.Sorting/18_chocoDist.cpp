//? Chocolate Distribution Problem
// n packets containing chocolates
// Rules: Each children get exactly 1 packet
// Minimise diff between student getting minm & maxm chocolates

#include <iostream>
#include <algorithm>

int minDiff(int arr[], int n, int k){

    std::sort(arr, arr+n);
    int res = INT_MAX;
    int l = 0, h = k-1;

    while(h < n){
        int diff = arr[h] - arr[l];
        h++;
        l++;
        res = std::min(res, diff);
    }

    return res;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int k;
    std::cin >> k;

    std::cout << minDiff(arr, n, k);
}