#include <iostream>

void hoare(int arr[], int n){

    int pivot = arr[0];

    int i = -1;
    int j = n;

    while(true){

        do{
            i++;
        }while(arr[i] < pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if(i >= j)
            break;

        std::swap(arr[i], arr[j]);
    }

    // Hoare Partition doesnot guarantee correct position for the pivot unlike lomuto partition

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    hoare(arr, n);
}