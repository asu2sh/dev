#include <iostream>

void trapped(int arr[], int n){
    
    int res = 0;
    int bar = arr[0];
    int lbar = arr[n-1];

    for(int i=1; i<n; ++i){

        if(bar > arr[i]){
            res = res + (bar - arr[i]);
        }
        else{
            if(lbar < bar)
                bar = lbar;
            else
                bar = arr[i];
        }
    }
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