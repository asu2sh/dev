// maximum subarray sum of k elements
#include <iostream>

// Sliding Window Technique: O(n)
void slidingWindow(int arr[], int n, int k){

    int currSum = 0;

    for(int i=0; i<k; ++i)
        currSum += arr[i];
    
    int res = currSum;

    for(int i=k; i<n; ++i){
        currSum = currSum + arr[i] - arr[i-k];
        res = std::max(res, currSum);
    }

    std::cout << res;
}


// Naive Approach: O(n*k)
int sum(int arr[], int k, int i){

    int currSum = 0;
    while(k){
        currSum += arr[i];
        i++;
        k--;
    }
    return currSum;    
}

void maxSum(int arr[], int n, int k){

    int res = INT_MIN;

    for(int i=0; i<n-k; i++){

        int currSum = sum(arr, k, i);
        res = std::max(res, currSum);
    }

    std::cout << res;
}

int main(){

    int n, k;
    std::cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    // maxSum(arr, n, k);
    slidingWindow(arr, n, k);
}