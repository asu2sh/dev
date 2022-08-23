#include <iostream>

void trapped(int arr[], int n){
    
    int bar = arr[0];
    int res = 0;
    for(int i=1; i<n; ++i){

        if(bar > arr[i]){
            res = res + (bar - arr[i]);
        }
        else
            bar = arr[i];
    }
    if(bar==arr[0])
        res = 0;

    std::cout << res;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    trapped(arr, n);
}