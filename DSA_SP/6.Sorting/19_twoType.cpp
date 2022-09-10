//? Two type Problems:
// Q.Seggregate:-
//   1. 0s 1s
//   2. +ve -ve
//   3. even odd

#include <iostream>

void binary(int arr[], int n){

    int l = 0;
    int h = n-1;

    while(l < h){

        if(arr[l] == 0)
            l++;
        else{
            if(arr[h] == 0){
                std::swap(arr[l], arr[h]);
                l++;
                h--;
            }
            else
                h--;
        }
    }

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    binary(arr, n);

}