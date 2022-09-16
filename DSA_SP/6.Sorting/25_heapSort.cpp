#include <iostream>

// if n is no. of elements then,
// ceil(n/2) is total no. of leaf elements

// fixing the root : O(logn), called n-1 times
void heapify(int arr[], int n, int i){

    int maxm = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l < n && arr[l] > arr[maxm])
        maxm = l;

    if(r < n && arr[r] > arr[maxm])
        maxm = r;

    if(maxm != i){
        std::swap(arr[i], arr[maxm]);
        heapify(arr, n, maxm);
    }
}

// building max heap: O(n)
void buildHeap(int arr[], int n){

    for(int i= n/2 - 1; i>=0; --i)
        heapify(arr, n, i);
}

// Time Complexity: O(nlogn)
void heapSort(int arr[], int n){

    buildHeap(arr, n);

    for(int i=n-1; i>0; --i){
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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

    heapSort(arr, n);
}