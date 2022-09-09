#include <iostream>
#include <algorithm>

int lomuto(int arr[], int l, int h){

    int pivot = arr[h];

    int idx = l-1;

    for(int i=l; i<=h; ++i){

        if(arr[i] < pivot){
            idx++;
            std::swap(arr[i], arr[idx]);
        }
    }
    std::swap(arr[idx+1], arr[h]);
    return (idx+1);
}

// Quick Select Algorithm
int kthSmallest(int arr[], int n, int k){

    int low = 0, high = n-1;

    while(low <= high){

        int p = lomuto(arr, low, high);

        if(p == k-1)
            return arr[p];

        else if(p > k-1)
            high = p-1;
        
        else
            low = p+1;
    }
    return -1;
}

// Naive: O(nlogn)
// int kth(int arr[], int n, int k){

//     std::sort(arr, arr+n);
//     return arr[k-1];
// }

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int k;
    std::cin >> k;

    // std::cout << kth(arr, n, k);
    std::cout << kthSmallest(arr, n, k);
}