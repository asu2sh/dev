// frequency in a sorted array

#include <iostream>

void frequency(int arr[], int n){

    int max = arr[0];
    int cntMax = 1;

    for(int i=1; i<=n; ++i){    // <=n is important for counting the last/for going to else statement

        if(max == arr[i]){
            cntMax++;
        }
        else{
            std::cout << max << " " << cntMax << std::endl;
            cntMax = 1;
            max = arr[i];
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