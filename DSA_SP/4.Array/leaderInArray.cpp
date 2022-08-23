#include <iostream>

void printLeaders(int arr[], int n){

    int max = 0;
    for(int i=n-1; i>0; --i){
        
        if(arr[i]>max){
            max = arr[i];
            std::cout << arr[i] << " ";
        }
    }
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    printLeaders(arr, n);
}