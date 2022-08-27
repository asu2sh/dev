#include <iostream>

void reversedArray(int arr[], int n){

    int low = 0;
    int high = n-1;

    while(low < high){
        std::swap(arr[low], arr[high]);
        low++;
        high--;
    }

    for(int i=0; i<n; ++i)
         std::cout << arr[i] << " ";
}

//? Little basic
void reverseArray(int arr[], int n){

    for(int i=0; i<n/2; ++i){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    //  n-1 is basically the last element and we are incrementing i,
    //  and decrementing n-1.
    
    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];

    reverseArray(arr, n);
    reversedArray(arr, n);
}
