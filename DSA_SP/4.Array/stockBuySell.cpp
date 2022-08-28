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

//Another Approach: if we can buy multiple times
//! it also gives us the indices of the buy and sell day

void whentobs(int arr[], int n){

    int lastBuy = 0;    // index of last buy
    int pft = -arr[0];

    for(int i=1; i<n; ++i){

        if(arr[i] <= arr[lastBuy]){

            pft -= arr[i];
            pft += arr[lastBuy];
            lastBuy = i;
        }
        else{
            // pft will be 0 here as we are buying and selling same day
            std::cout << "BUY: " << lastBuy <<  " SELL: " << i << std::endl;
            // printing as we got buying and selling indices here
            lastBuy = i;
        }
    }
    pft += arr[n-1];    
    // as we would have bought on the last day
    std::cout << "maxProfit = " << pft;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    // maxProfit(arr, n);
    whentobs(arr, n);
}