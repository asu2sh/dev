#include <iostream>

void divide(int arr[], int l, int r){

    if(l == r)
        return;
    int m = l + (r - l)/2;
    divide(arr, l, m);
    divide(arr, m+1, r);
    
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i){
        std::cin >> arr[i];
    }

    int l, r;
    l = 0;
    r = n-1;

    divide(arr, l, r);
}