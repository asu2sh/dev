#include <iostream>

int recursiveBS(int arr[], int low, int high, int x){

    if(low > high)
        return -1;

    int mid = (low+high)/2;

    if(arr[mid]==x) return mid;

    else if(arr[mid]>x)
        return recursiveBS(arr, low, mid-1, x);
    
    else
        return recursiveBS(arr, mid+1, high, x);

}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    int x;
    std::cin >> x;
    int low = 0;
    int high = n-1;

    std::cout << recursiveBS(arr, low, high, x);
}