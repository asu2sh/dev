#include <iostream>

void largestElement(int arr[], int n){

    int idx = 0;
    int idx2 = 0;

    int max = 0;
    for(int i=0; i<n; ++i){
        if(max < arr[i]){
            max = arr[i];
            idx2 = idx;
            idx = i;
        }
    }

    int max2 =0;
    for(int i=0; i<n; ++i){
        if(max2 < arr[i] && arr[i] != max){
            max2 = arr[i];
            idx2 = i;
        }
    }
    
    std::cout << idx << " " << idx2;
}

int main(){

    int n;
    std::cin >> n;

    int arr[n];
    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    largestElement(arr, n);
}