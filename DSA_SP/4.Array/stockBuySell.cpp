#include <iostream>

void maxProfit(int arr[], int n){

    int pft = 0;
    for(int i=0; i<n-1; ++i){

        if(arr[i] < arr[i+1]){
            pft = pft + (arr[i+1] - arr[i]);
        }    
    }
    std::cout << pft;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    maxProfit(arr, n);
}