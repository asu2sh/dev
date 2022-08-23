// frequency in a sorted array

#include <iostream>

void frequency(int arr[], int n){

    int max = arr[0];
    int cntMax = 0;

    for(int i=0; i<=n; ++i){

        if(max != arr[i]){
            std::cout << max << " " << cntMax << std::endl;
            cntMax = 0;
        }

        if(max <= arr[i]){
            max = arr[i];
            cntMax++;
        }
    }
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    frequency(arr, n);
}