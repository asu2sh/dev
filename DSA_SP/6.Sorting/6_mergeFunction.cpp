#include <iostream>

void mergeFunc(int arr1[], int arr2[], int n1, int n2){

    int res[n1+n2];
    int i = 0, i1 = 0, i2 = 0;

    while(i1 < n1 && i2 < n2){

        if(arr1[i1] <= arr2[i2])
            res[i++] = arr1[i1++];

        else
            res[i] = arr2[i2];
    }

    while(i1 < n1)
        res[i++] = arr1[i1++];

    while(i2 < n2)
        res[i++] = arr2[i2++];

    for(int &x: res)
        std::cout << x << " ";
}

//! my mid fn implementation:
void mergeFn(int arr[], int n, int low, int mid, int high){

    int left[mid-low+1];
    int right[high-mid];

    int i1 = 0, i2 = 0;

    for(int i=low; i<=mid; ++i, ++i1)
        left[i1] = arr[i];

    for(int i=mid+1; i<=high; ++i, ++i2)
        right[i2] = arr[i];

    mergeFunc(left, right, mid-low+1, high-mid);
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int low, mid, high;
    std::cin >> low >> mid >> high;

    mergeFn(arr, n, low, mid, high);
}