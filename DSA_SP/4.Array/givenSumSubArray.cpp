#include <iostream>
#include <vector>

// Sliding Window Technique with Variable Size
void isSubArr(int arr[], int n, int sum){

    int currSum = arr[0];
    int idx = 0;

    for(int i=1; i<n; ++i){
        currSum += arr[i];
        while(currSum > sum){
            currSum = currSum - arr[idx];
            idx++;
        }
        if(currSum == sum){
            std::cout << "YES";
            return;
        }
    }
    std::cout << "NO";
}

//! Returns start and end indices of the subarray with given sum
std::vector<int> subarraySum(int arr[], int n, long long s){

    int currSum = 0;
    int idx = 0;
    
    if(s == 0)
        return {-1};

    for(int i=0; i<n; ++i){
        currSum += arr[i];
        while(currSum > s){
            currSum = currSum - arr[idx];
            idx++;
        }
        if(currSum == s)
            return {idx+1, i+1};
    }
    return {-1};
}


//  Naive: O(n^2)
void isPresent(int arr[], int n, int sum){

    for(int i=0; i<n; ++i){
        int currSum = 0;
        for(int j = i; j<n; ++j){
            currSum += arr[j];
            if(currSum == sum){
                std::cout << "YES";
                return;
            }
        }
    }
    std::cout << "NO";
}

int main(){

    int n, k;
    std::cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    //isPresent(arr, n, k);
    isSubArr(arr, n, k);
}