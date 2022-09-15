#include <iostream>

// Time Complexity: O(n)
void cycleSort(int arr[], int n){

    int i = 0;
    int cnt = 0;
    while(i < n){

        int pos = arr[i] - 1;   // 1 to N; for 0 to N: int pos = arr[i]
        if(arr[i] != arr[pos]){
            std::swap(arr[i], arr[pos]);
            cnt++;
        }
        else
            i++;
    }

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";

    std::cout << "\nminSwap: " << cnt;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    cycleSort(arr, n);
}