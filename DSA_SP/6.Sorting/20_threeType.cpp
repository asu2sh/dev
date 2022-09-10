//? Three type Problems:
// Q. Seggregate:-
//  1. 0s 1s and 2s
//  2. Three way partitioning
//  3. Partition Around a Range

//! Dutch National Flag Algorithm

#include <iostream>
#include <algorithm>

void sort(int arr[], int n){

    int l = 0, m = 0, h = n-1;

    while(m <= h){

        if(arr[m] == 0){
            std::swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if(arr[m] == 1){
            m++;
        }
        else{
            std::swap(arr[m], arr[h]);
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

    sort(arr, n);
}