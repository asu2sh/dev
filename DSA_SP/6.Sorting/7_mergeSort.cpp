#include <iostream>

void mergeFn(int arr[], int l, int m, int h){
    
    int n1 = m-l+1;
    int n2 = h-m;

    int left[n1];
    int right[n2];

    for(int i=0; i<n1; i++)
        left[i] = arr[i+l];

    for(int j=0; j<n2; j++)
        right[j] = arr[j+m+1];
    
    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2){

        if(left[i] <= right[j])
            arr[k++] = left[i++];

        else
            arr[k++] = right[j++];
    }

    while(i < n1)
        arr[k++] = left[i++];

    while(j < n2)
        arr[k++] = right[j++];
}


void mergeSort(int arr[], int low, int high){

    if(low < high){

        int mid = low + (high-low)/2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);

        mergeFn(arr, low, mid, high);
    }
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int low = 0;
    int high = n-1;

    mergeSort(arr, low, high);

    for(int &i : arr)
        std::cout << i << " ";
}