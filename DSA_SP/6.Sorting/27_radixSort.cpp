#include <iostream>

void countingSort(int arr[], int n, int exp){

    int count[10] = {0};

    for(int i=0; i<n; ++i)
        count[(arr[i]/exp)% 10]++;

    for(int i=1; i<10; ++i)
        count[i] = count[i] + count[i-1];

    int output[n];

    for(int i=n-1; i>=0; --i)
        output[--count[(arr[i]/exp)% 10]] = arr[i];

    for(int i=0; i<n; ++i)
        arr[i] = output[i];
}

void radixSort(int arr[], int n){

    int maxm = arr[0];

    for(int i=1; i<n; ++i){
        if(arr[i] > maxm)
            maxm = arr[i];
    }

    for(int exp=1; maxm/exp > 0; exp = exp*10)
        countingSort(arr, n, exp);

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    radixSort(arr, n);
}