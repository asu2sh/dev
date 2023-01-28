#include <iostream>
#include <vector>
#include <algorithm>

int longestIncreasingSubsequence(int arr[], int n){

    std::vector<int> lis(n, 1);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            if(arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
        }
    }
    return *max_element(lis.begin(), lis.end());
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    std::cout << longestIncreasingSubsequence(arr, n);
}