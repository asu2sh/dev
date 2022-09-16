#include <iostream>
#include <vector>
#include <algorithm>

void bucketSort(int arr[], int n){

    int k = 5;
    int maxm = arr[0];

    for(int i=1; i < n; ++i)
        maxm = std::max(maxm, arr[i]);

    maxm++;
    std::vector<int> bkt[k];

    for(int i=0; i < n; ++i){
        int bi = (k * arr[i]/maxm);
        bkt[bi].push_back(arr[i]);
    }

    for(int i=0; i < k; ++i)
        std::sort(bkt[i].begin(), bkt[i].end());

    int idx = 0;
    
    for(int i=0; i < k; ++i){
        for(int j=0; j < bkt[i].size(); j++)
            arr[idx++] = bkt[i][j];
    }

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";

}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    bucketSort(arr, n);
}