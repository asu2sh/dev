#include <iostream>

void missingAndRepeating(int arr[], int n){

    int X = 0, res1 = 0, res2 = 0;

    for(int i=0; i<n; ++i){
        X ^= arr[i];
        X ^= (i + 1);
    }

    int setBit = X & ~(X - 1);

    for(int i=0; i<n; ++i){

        if(arr[i] & setBit)
            res1 ^= arr[i];
        else
            res2 ^= arr[i];

        if((i+1) & setBit)
            res1 ^= (i+1);
        else
            res2 ^= (i+1);
    }

    for(int i=0; i<n; ++i){
        if(res1 == arr[i]){
            std::cout << "Repeating Number: " << res1 << "\tMissing Number: " << res2 << std::endl;
            return;
        }
    }

    std::cout << "Repeating Number: " << res2 << "\tMissing Number: " << res1 << std::endl;
    return;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    missingAndRepeating(arr, n);
}