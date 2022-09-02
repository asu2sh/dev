#include <iostream>

int ceilOf(int arr[], int n, int k){

    int low = 0, high = n-1;

    if(k < arr[0])  return arr[0];
    if(k > arr[n-1])    return -1;

    while(low <= high){

        int mid = (low+high)/2;

        if(arr[mid]==k)
            return arr[mid];

        else if(arr[mid] > k){
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return arr[low];
}
// for finding floor return arr[high]
// & change the condition in line 7,8 accordingly

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int k;
    std::cin >> k;
    std::cout << ceilOf(arr, n, k);
}