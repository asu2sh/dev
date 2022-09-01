#include <iostream>

// Time Complexity: O(n * log(sum))
bool isFeasible(int arr[], int n, int k, int mid){

    int req = 1, sum = 0;

    for(int i=0; i<n; ++i){

        if(sum + arr[i] > mid){

            req++;
            sum =  arr[i];
        }
        else
            sum += arr[i];
    }
    return (req <= k);
}

int minPages(int arr[], int n, int k){

    int sum = 0, mx = 0;

    for(int i=0; i<n; ++i){
        sum += arr[i];
        mx = std::max( mx, arr[i]);
    }

    int low = mx, high = sum, res = 0;

    while(low <= high){

        int mid = (low+high)/2;

        if(isFeasible(arr, n, k, mid)){
            res = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
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

    std::cout << minPages(arr, n, k);
}